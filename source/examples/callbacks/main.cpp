#include <iostream>

#include <GLFW/glfw3.h>

#include <glbinding/glbinding.h>
#include <glbinding/AbstractFunction.h>
#include <glbinding/functions.h>
#include <glbinding/constants.h>
#include <glbinding/meta.h>

#include <iostream>

void errorfun(int errnum, const char* errmsg)
{
    std::cerr << errnum << ": " << errmsg << std::endl;
}

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

void doSomeOpenGLStuff()
{
    std::set<gl::Extension> extensions;
    int num = 0;
    gl::GetIntegerv(gl::GLenum::NUM_EXTENSIONS, &num);

    for (int i = 0; i < std::min(num, 5); ++i)
    {
        const unsigned char * name = gl::GetStringi(gl::GLenum::EXTENSIONS, i);
        gl::Extension extension = gl::meta::extensionFromString(reinterpret_cast<const char*>(name));
        if (extension != gl::Extension::Unknown)
            extensions.insert(extension);
    }

    std::cout << std::endl;

    GLuint vaoId;
    GLuint cornerBufferId;
    gl::GenVertexArrays(1, &vaoId);
    gl::GenBuffers(1, &cornerBufferId);
    GLuint programId = gl::CreateProgram();

    GLuint vertexShaderId = gl::CreateShader(gl::GLenum::VERTEX_SHADER);
    gl::ShaderSource(vertexShaderId, 1, &vertexShaderCode, 0);
    gl::CompileShader(vertexShaderId);

    GLuint fragmentShaderId = gl::CreateShader(gl::GLenum::FRAGMENT_SHADER);
    gl::ShaderSource(fragmentShaderId, 1, &fragmentShaderCode, 0);
    gl::CompileShader(fragmentShaderId);

    gl::AttachShader(programId, vertexShaderId);
    gl::AttachShader(programId, fragmentShaderId);
    gl::LinkProgram(programId);

    struct vec2 { float x; float y; };

    const vec2 cornerData[4] = {
        vec2{0, 0},
        vec2{1, 0},
        vec2{0, 1},
        vec2{1, 1}
    };

    gl::BindBuffer(gl::GLenum::ARRAY_BUFFER, cornerBufferId);
    gl::BufferData(gl::GLenum::ARRAY_BUFFER, sizeof(vec2)*4, cornerData, gl::GLenum::STATIC_DRAW);

    gl::BindVertexArray(vaoId);

    GLint attributeIndex = gl::GetAttribLocation(programId, "corner");
    GLint bindingIndex = 0;
    gl::VertexAttribBinding(attributeIndex, bindingIndex);
    gl::BindVertexBuffer(bindingIndex, cornerBufferId, 0, sizeof(vec2));
    gl::VertexAttribFormat(attributeIndex, 2, gl::GLenum::FLOAT, gl::FALSE_, 0);
    gl::EnableVertexAttribArray(attributeIndex);

    gl::UseProgram(programId);

    gl::DrawArrays(gl::GLenum::TRIANGLE_STRIP, 0, 4);

    gl::DeleteProgram(programId);
    gl::DeleteBuffers(1, &cornerBufferId);
    gl::DeleteVertexArrays(1, &vaoId);
}

int main(int /*argc*/, char* /*argv*/[])
{
    if (!glfwInit())
    {
        return 1;
    }

    glfwSetErrorCallback(errorfun);

    GLFWwindow* window = glfwCreateWindow(640, 480, "Dummy Window", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);

    if (!gl::initialize())
    {
        glfwTerminate();
        return 1;
    }

    gl::AbstractFunction::enableCallbacksForAll();
    gl::AbstractFunction::setCallbackVerboseForAll(true);
    gl::AbstractFunction::setBeforeCallback([](const gl::AbstractFunction & f) {
        std::cout << f.name();
    });
    gl::AbstractFunction::setAfterCallback([](const gl::AbstractFunction &) {
        std::cout << std::endl;
    });
    gl::AbstractFunction::setParametersCallback([](const gl::AbstractFunction &, const std::vector<gl::AbstractValue*> & parameters) {
        std::cout << "(";
        for (unsigned i = 0; i < parameters.size(); ++i)
        {
            parameters[i]->printOn(std::cout);
            if (i < parameters.size()-1)
                std::cout << ", ";
        }
        std::cout << ")";
    });
    gl::AbstractFunction::setReturnValueCallback([](const gl::AbstractFunction &, const gl::AbstractValue* returnValue) {
        if (returnValue)
        {
            std::cout << " -> ";
            returnValue->printOn(std::cout);
        }
    });

    doSomeOpenGLStuff();

    glfwTerminate();
    return 0;
}
