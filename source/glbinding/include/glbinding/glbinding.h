#pragma once

#include <glbinding/glbinding_api.h>
#include <glbinding/ContextId.h>

namespace glbinding {

class Binding;

GLBINDING_API void initialize();
GLBINDING_API void initialize(ContextId contextId, bool useContext = true, bool resolveFunctions = true);

GLBINDING_API void resolveFunctions();

GLBINDING_API void useCurrentContext();
GLBINDING_API void useContext(ContextId contextId);

GLBINDING_API void finalizeCurrentContext();
GLBINDING_API void finalizeContext(ContextId contextId);

GLBINDING_API Binding & currentBinding();

} // namespace glbinding
