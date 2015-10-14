#ifdef STRINGS_BY_GL

#include "Meta_Maps.h"

#include <string>
#include <unordered_map>

#include <glbinding/gl/boolean.h>


using namespace gl;

namespace glbinding
{

const std::unordered_map<GLboolean, std::string> Meta_StringsByBoolean
{
    { GLboolean::GL_FALSE, "GL_FALSE" },
    { GLboolean::GL_TRUE, "GL_TRUE" }
};

} // namespace glbinding

#endif // STRINGS_BY_GL
