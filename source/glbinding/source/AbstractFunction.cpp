
#include <glbinding/AbstractFunction.h>

#include <iostream>
#include <memory>
#include <set>
#include <cassert>

#include <glbinding/FunctionObjects.h>
#include <glbinding/Meta.h>

namespace gl 
{

AbstractFunction::Callback AbstractFunction::s_beforeCallback;
AbstractFunction::Callback AbstractFunction::s_afterCallback;
AbstractFunction::Callback AbstractFunction::s_unresolvedCallback;
AbstractFunction::ParametersCallback AbstractFunction::s_parametersCallback;
AbstractFunction::ReturnValueCallback AbstractFunction::s_returnValueCallback;


AbstractFunction::AbstractFunction(const char * _name)
: m_name(_name)
, m_callbackLevel(CallbackLevel::None)
{
}

AbstractFunction::State::State()
: address(nullptr)
, initialized(false)
{
}

AbstractFunction::~AbstractFunction()
{
}

bool AbstractFunction::hasState() const
{
    return hasState(FunctionObjects::context());
}

bool AbstractFunction::hasState(int context) const
{
    return m_states.size() > static_cast<unsigned>(context);
}

AbstractFunction::State & AbstractFunction::getState(int context) const
{
    if (m_states.size() <= static_cast<unsigned>(context))
        m_states.resize(context + 1);

    return m_states[context];
}

AbstractFunction::State & AbstractFunction::currentState() const
{
    return getState(FunctionObjects::context());
}

void AbstractFunction::initialize()
{
    initialize(FunctionObjects::context());
}

void AbstractFunction::initialize(int context)
{
    State & state = getState(context);

    if (!state.initialized)
    {
        state.address = getProcAddress(m_name);
        state.initialized = true;
    }
}

const std::set<GLextension> & AbstractFunction::extensions() const
{
    return Meta::getExtensionsRequiring(m_name);
}

const char * AbstractFunction::name() const
{
    return m_name;
}

bool AbstractFunction::isResolved() const
{
    return isResolved(FunctionObjects::context());
}

bool AbstractFunction::isResolved(int context) const
{
    if (!hasState(context))
        return false;

    return currentState().address != nullptr;
}

ProcAddress AbstractFunction::address() const
{
    const State & state = currentState();

    if (!state.initialized)
        const_cast<AbstractFunction*>(this)->initialize();

    return state.address;
}

bool AbstractFunction::callbacksEnabled() const
{
    return m_callbackLevel != CallbackLevel::None;
}

bool AbstractFunction::isEnabled(CallbackLevel level)
{
    return (static_cast<unsigned char>(m_callbackLevel) & static_cast<unsigned char>(level)) == static_cast<unsigned char>(level);
}

void AbstractFunction::setCallbackLevel(CallbackLevel level)
{
    m_callbackLevel = level;
}

void AbstractFunction::setCallbackLevelForAll(CallbackLevel level)
{
    for (AbstractFunction * function : FunctionObjects::functions())
        function->setCallbackLevel(level);
}

void AbstractFunction::setCallbackLevelForAllExcept(CallbackLevel level, const std::set<std::string> & blackList)
{
    for (AbstractFunction * function : FunctionObjects::functions())
        if (blackList.find(function->name()) == blackList.end())
            function->setCallbackLevel(level);
}

void AbstractFunction::setBeforeCallback(Callback callback)
{
    s_beforeCallback = callback;
}

void AbstractFunction::setAfterCallback(Callback callback)
{
    s_afterCallback = callback;
}

void AbstractFunction::setUnresolvedCallback(Callback callback)
{
    s_unresolvedCallback = callback;
}

void AbstractFunction::setParametersCallback(ParametersCallback callback)
{
    s_parametersCallback = callback;
}

void AbstractFunction::setReturnValueCallback(ReturnValueCallback callback)
{
    s_returnValueCallback = callback;
}

void AbstractFunction::before()
{
    if (s_beforeCallback)
        s_beforeCallback(*this);
}

void AbstractFunction::after()
{
    if (s_afterCallback)
        s_afterCallback(*this);
}

void AbstractFunction::parameters(const std::vector<AbstractValue*> & values)
{
    if (s_parametersCallback)
        s_parametersCallback(*this, values);

    for (gl::AbstractValue * value : values)
        delete value;
}

void AbstractFunction::returnValue(const AbstractValue * value)
{
    if (s_returnValueCallback)
        s_returnValueCallback(*this, value);

    delete value;
}

void AbstractFunction::unresolved()
{
    if (s_unresolvedCallback)
        s_unresolvedCallback(*this);
}

} // namespace gl
