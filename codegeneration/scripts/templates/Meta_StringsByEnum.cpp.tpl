#ifdef EXTENSIVE_META

#include "Meta_Maps.h"

#include <glbinding/gl/enum.h>


using namespace gl; // ToDo: multiple APIs?

namespace glbinding
{

const std::unordered_map<GLenum, std::string> Meta_StringsByEnum =
{
{{#enums}}
    { GLenum::{{identifier}}, "{{name}}" }{{^last}},{{/last}}
{{/enums}}
};

} // namespace glbinding

#endif // EXTENSIVE_META
