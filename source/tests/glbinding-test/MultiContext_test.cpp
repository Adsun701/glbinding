
#include <gmock/gmock.h>

#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>

#include <glbinding/AbstractFunction.h>
#include <glbinding/Meta.h>
#include <glbinding/ContextInfo.h>
#include <glbinding/Version.h>
#include <glbinding/Binding.h>

#include <glbinding/gl/gl.h>

using namespace gl;
using namespace glbinding;

class MultiContext_test : public testing::Test
{
public:
};

void error(int /*errnum*/, const char * /*errmsg*/)
{
    FAIL();
}

TEST_F(MultiContext_test, Test)
{
    int success = glfwInit();

    EXPECT_EQ(1, success);

    glfwSetErrorCallback(error);

    glfwWindowHint(GLFW_VISIBLE, false);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 2);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, false);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    GLFWwindow * window1 = glfwCreateWindow(320, 240, "Window 1", nullptr, nullptr);
    glfwHideWindow(window1);

    EXPECT_NE(nullptr, window1);

    glfwWindowHint(GLFW_VISIBLE, false);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, false);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    GLFWwindow * window2 = glfwCreateWindow(320, 240, "Window 2", nullptr, nullptr);

    EXPECT_NE(nullptr, window2);

    glfwMakeContextCurrent(window1);
    Binding::initialize();

#ifdef  _WIN32
    EXPECT_EQ(Version(3, 2), ContextInfo::version());
//    EXPECT_EQ(nullptr, Binding::DispatchCompute.address());
#elif defined(MAC_OS)
    EXPECT_EQ(Version(4, 1), ContextInfo::version());
    EXPECT_EQ(nullptr, Binding::DispatchCompute.address());
#else // Linux
    EXPECT_EQ(Version(3, 2), ContextInfo::version());
    EXPECT_NE(nullptr, Binding::DispatchCompute.address());
#endif

    glfwMakeContextCurrent(window2);
    Binding::initialize();

#ifdef _WIN32
    EXPECT_EQ(Version(4, 0), ContextInfo::version());
//    EXPECT_NE(nullptr, Binding::DispatchCompute.address());
#elif defined(MAC_OS)
    EXPECT_EQ(Version(2, 1), ContextInfo::version());
    EXPECT_EQ(nullptr, Binding::DispatchCompute.address());
#else // Linux
    EXPECT_EQ(Version(4, 0), ContextInfo::version());
    EXPECT_NE(nullptr, Binding::DispatchCompute.address());
#endif

    glfwTerminate();
}
