#pragma once

#include <glbinding/glbinding_api.h>

#include <string>
#include <set>
#include <vector>
#include <functional>

#include <glbinding/GetProcAddress.h>
#include <glbinding/Extension.h>
#include <glbinding/AbstractValue.h>


namespace gl 
{

class GLBINDING_API AbstractFunction
{
public:
    enum class CallbackLevel : unsigned char
    {
        None        = 0x0,
        Before      = 0x1,
        After       = 0x2,
        Parameters  = 0x4,
        ReturnValue = 0x8,
        Unresolved  = 0x10,
        BeforeAndAfter = Before | After,
        All = Before | After | Parameters | ReturnValue | Unresolved
    };

    AbstractFunction(const char * name);
    virtual ~AbstractFunction();

    void initialize();
    void initialize(int context);

    const char * name() const;

    bool isResolved() const;
    bool isResolved(int context) const;

    ProcAddress address() const;

    std::vector<Extension> extensions() const;

    void setCallbackLevel(CallbackLevel level);

public:
    static const std::vector<AbstractFunction *> & functions();

    static void setContext(int context);
    static void initializeFunctions();
    static void initializeFunctions(int context);

public:
    using Callback = std::function<void(const AbstractFunction &)>;
    using ParametersCallback = std::function<void(const AbstractFunction &, const std::vector<AbstractValue *> &)>;
    using ReturnValueCallback = std::function<void(const AbstractFunction &, const AbstractValue *)>;

    static void setBeforeCallback(Callback callback);
    static void setAfterCallback(Callback callback);
    static void setUnresolvedCallback(Callback callback);
    static void setParametersCallback(ParametersCallback callback);
    static void setReturnValueCallback(ReturnValueCallback callback);

    static void setCallbackLevelForAll(CallbackLevel level);
    static void setCallbackLevelForAllExcept(CallbackLevel level, const std::set<std::string> & blackList);

protected:
    struct State
    {
        State();

        ProcAddress address;
        bool initialized;
    };

    bool hasState(int context) const;
    bool hasState() const;

    State & getState(int context) const;
    State & currentState() const;


    bool callbacksEnabled() const;
    bool isEnabled(CallbackLevel level);

    void before();
    void parameters(const std::vector<AbstractValue*> & values);
    void returnValue(const AbstractValue * value);
    void after();
    void unresolved();

protected:
    const char * m_name;
    CallbackLevel m_callbackLevel;

    mutable std::vector<State> m_states;

    static int s_context;

    static Callback s_beforeCallback;
    static Callback s_afterCallback;
    static Callback s_unresolvedCallback;
    static ParametersCallback s_parametersCallback;
    static ReturnValueCallback s_returnValueCallback;

    static const std::vector<AbstractFunction*> s_functions;
};

} // namespace gl
