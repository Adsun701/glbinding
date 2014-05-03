#include <type_traits>

#define GLM_FORCE_RADIANS

#include <glow/VertexArrayObject.h>
#include <glow/Error.h>
#include <glow/StaticStringSource.h>
#include <glow/Program.h>
#include <glow/Buffer.h>
#include <glow/VertexAttributeBinding.h>

#include <glowutils/StringTemplate.h>

#include <glowwindow/Context.h>
#include <glowwindow/ContextFormat.h>
#include <glowwindow/MainLoop.h>
#include <glowwindow/Window.h>
#include <glowwindow/WindowEventHandler.h>
#include <glowwindow/events.h>

#include <GL/glx.h>

namespace {
    const char* vertexShaderCode = R"(
#version 140
#extension GL_ARB_explicit_attrib_location : require

layout (location = 0) in vec2 corner;

out vec4 color;

void main()
{
    gl_Position = vec4(corner * 2.0 - 1.0, 0.0, 1.0);
    color = vec4(corner, 0.0, 1.0);
}

)";
    const char* fragmentShaderCode = R"(
#version 140
#extension GL_ARB_explicit_attrib_location : require

layout (location = 0) out vec4 fragColor;

in vec4 color;

void main()
{
    fragColor = color;
}

)";
}

namespace {
    __GLXextFuncPtr (*glowGetProcAddress) (const GLubyte*) = glXGetProcAddressARB;

    GLenum (*glowGetError) (void);

    inline void CheckGlowError()
    {
        assert(glowGetError() == GL_NO_ERROR);
    }

    template <typename ReturnType, typename... Arguments>
    class GlowFunction
    {
    public:
        using FunctionSignature = ReturnType (*) (Arguments...);

        GlowFunction()
        : m_valid(false)
        {
        }

        GlowFunction(FunctionSignature functionPointer)
        : m_functionPointer(functionPointer)
        , m_valid(true)
        {
        }

        void setFunction(FunctionSignature functionPointer)
        {
            m_valid = true;

            m_functionPointer = functionPointer;
        }

        ReturnType operator()(Arguments... arguments)
        {
            assert(m_valid);

            ReturnType returnValue = m_functionPointer(std::forward<Arguments>(arguments)...);
            CheckGlowError();

            return returnValue;
        }
    protected:
        FunctionSignature m_functionPointer;
        bool m_valid;
    };

    template <typename... Arguments>
    class GlowFunction<void, Arguments...>
    {
    public:
        using FunctionSignature = void (*) (Arguments...);

        GlowFunction()
        : m_valid(false)
        {
        }

        GlowFunction(FunctionSignature functionPointer)
        : m_functionPointer(functionPointer)
        , m_valid(true)
        {
        }

        void setFunction(FunctionSignature functionPointer)
        {
            m_valid = true;

            m_functionPointer = functionPointer;
        }

        void operator()(Arguments... arguments)
        {
            assert(m_valid);

            m_functionPointer(std::forward<Arguments>(arguments)...);
            CheckGlowError();
        }
    protected:
        FunctionSignature m_functionPointer;
        bool m_valid;
    };

    template <typename ReturnType, typename... Arguments>
    void initializeCheckedGlowFunction(const char* name, GlowFunction<ReturnType, Arguments...> & functor)
    {
        functor.setFunction(
            reinterpret_cast<typename GlowFunction<ReturnType, Arguments...>::FunctionSignature>(
                glowGetProcAddress(reinterpret_cast<const GLubyte*>(name))
            )
        );
    }

    template <typename FunctionSignature>
    void initializeGlowFunction(const char* name, FunctionSignature & functionPointer)
    {
        functionPointer = reinterpret_cast<FunctionSignature>(glowGetProcAddress(reinterpret_cast<const GLubyte*>(name)));
    }

    GlowFunction<void, GLbitfield> glowClear;
    GlowFunction<void, GLfloat, GLfloat, GLfloat, GLfloat> glowClearColor;
    GlowFunction<void, GLsizei, GLuint*> glowGenBuffers;
    GlowFunction<void, GLsizei, GLuint*> glowDeleteBuffers;
}

class EventHandler : public glowwindow::WindowEventHandler
{
public:
    EventHandler()
    {
    }

    virtual ~EventHandler()
    {
        cornerBuffer->unref();
        program->unref();
        vao->unref();

        glowDeleteBuffers(1, &m_cornerBuffer);
        CheckGlowError();
    }

    virtual void initialize(glowwindow::Window &) override
    {
        initializeGlowFunction("glGetError", glowGetError);
        initializeCheckedGlowFunction("glClear", glowClear);
        initializeCheckedGlowFunction("glClearColor", glowClearColor);
        initializeCheckedGlowFunction("glGenBuffers", glowGenBuffers);
        initializeCheckedGlowFunction("glDeleteBuffers", glowDeleteBuffers);

        glowClearColor(0.2f, 0.3f, 0.4f, 1.f);
        CheckGlowError();


        auto vertexShaderSource = new glow::StaticStringSource(vertexShaderCode);
        auto fragmentShaderSource = new glow::StaticStringSource(fragmentShaderCode);

        glowGenBuffers(1, &m_cornerBuffer);
        CheckGlowError();

        cornerBuffer = glow::Buffer::fromId(m_cornerBuffer, false);
        cornerBuffer->ref();
        program = new glow::Program();
        program->ref();
        vao = new glow::VertexArrayObject();
        vao->ref();

        program->attach(
                        new glow::Shader(GL_VERTEX_SHADER, vertexShaderSource),
                        new glow::Shader(GL_FRAGMENT_SHADER, fragmentShaderSource)
                        );

        cornerBuffer->setData(std::array<glm::vec2, 4>{ {
            glm::vec2(0, 0),
            glm::vec2(1, 0),
            glm::vec2(0, 1),
            glm::vec2(1, 1)
        } });

        vao->binding(0)->setAttribute(0);
        vao->binding(0)->setBuffer(cornerBuffer, 0, sizeof(glm::vec2));
        vao->binding(0)->setFormat(2, GL_FLOAT);
        vao->enable(0);
    }

    virtual void framebufferResizeEvent(glowwindow::ResizeEvent & event) override
    {
        glViewport(0, 0, event.width(), event.height());
        CheckGlowError();
    }

    virtual void paintEvent(glowwindow::PaintEvent &) override
    {
        glowClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        CheckGlowError();

        program->use();
        vao->drawArrays(GL_TRIANGLE_STRIP, 0, 4);
    }

    virtual void idle(glowwindow::Window & /*window*/) override
    {
        //window.repaint();
    }

private:
    GLuint m_vao;
    GLuint m_cornerBuffer;
    GLuint m_program;
    glow::VertexArrayObject* vao;
    glow::Buffer* cornerBuffer;
    glow::Program* program;
};

int main(int /*argc*/, char* /*argv*/[])
{
    glowwindow::ContextFormat format;
    format.setVersion(3, 0);

    glowwindow::Window window;

    window.setEventHandler(new EventHandler());

    if (window.create(format, "GLBindings Example"))
    {
        window.context()->setSwapInterval(glowwindow::Context::VerticalSyncronization);

        window.show();

        return glowwindow::MainLoop::run();
    }
    else
    {
        return 1;
    }
}
