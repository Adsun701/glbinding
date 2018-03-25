
#include <glbinding-aux/types_to_string.h>

#include <ostream>
#include <bitset>
#include <sstream>

#include <glbinding-aux/Meta.h>

#include "types_to_string_private.h"


namespace gl
{


std::ostream & operator<<(std::ostream & stream, const GLextension & value)
{
    stream << glbinding::aux::Meta::getString(value);
    return stream;
}


} // namespace gl

namespace gl
{


std::ostream & operator<<(std::ostream & stream, const GLenum & value)
{
    stream << glbinding::aux::Meta::getString(value);
    return stream;
}


} // namespace gl

namespace gl
{


std::ostream & operator<<(std::ostream & stream, const GLboolean & value)
{
    stream << glbinding::aux::Meta::getString(value);
    return stream;
}


} // namespace gl

namespace gl
{


std::ostream & operator<<(std::ostream & stream, const AttribMask & value)
{
    stream << glbinding::aux::bitfieldString<AttribMask>(value);
    return stream;
}


} // namespace gl

namespace gl
{


std::ostream & operator<<(std::ostream & stream, const BufferAccessMask & value)
{
    stream << glbinding::aux::bitfieldString<BufferAccessMask>(value);
    return stream;
}


} // namespace gl

namespace gl
{


std::ostream & operator<<(std::ostream & stream, const ClearBufferMask & value)
{
    stream << glbinding::aux::bitfieldString<ClearBufferMask>(value);
    return stream;
}


} // namespace gl

namespace gl
{


std::ostream & operator<<(std::ostream & stream, const ClientAttribMask & value)
{
    stream << glbinding::aux::bitfieldString<ClientAttribMask>(value);
    return stream;
}


} // namespace gl

namespace gl
{


std::ostream & operator<<(std::ostream & stream, const ContextFlagMask & value)
{
    stream << glbinding::aux::bitfieldString<ContextFlagMask>(value);
    return stream;
}


} // namespace gl

namespace gl
{


std::ostream & operator<<(std::ostream & stream, const ContextProfileMask & value)
{
    stream << glbinding::aux::bitfieldString<ContextProfileMask>(value);
    return stream;
}


} // namespace gl

namespace gl
{


std::ostream & operator<<(std::ostream & stream, const FfdMaskSGIX & value)
{
    stream << glbinding::aux::bitfieldString<FfdMaskSGIX>(value);
    return stream;
}


} // namespace gl

namespace gl
{


std::ostream & operator<<(std::ostream & stream, const FragmentShaderColorModMaskATI & value)
{
    stream << glbinding::aux::bitfieldString<FragmentShaderColorModMaskATI>(value);
    return stream;
}


} // namespace gl

namespace gl
{


std::ostream & operator<<(std::ostream & stream, const FragmentShaderDestMaskATI & value)
{
    stream << glbinding::aux::bitfieldString<FragmentShaderDestMaskATI>(value);
    return stream;
}


} // namespace gl

namespace gl
{


std::ostream & operator<<(std::ostream & stream, const FragmentShaderDestModMaskATI & value)
{
    stream << glbinding::aux::bitfieldString<FragmentShaderDestModMaskATI>(value);
    return stream;
}


} // namespace gl

namespace gl
{


std::ostream & operator<<(std::ostream & stream, const MapBufferUsageMask & value)
{
    stream << glbinding::aux::bitfieldString<MapBufferUsageMask>(value);
    return stream;
}


} // namespace gl

namespace gl
{


std::ostream & operator<<(std::ostream & stream, const MemoryBarrierMask & value)
{
    stream << glbinding::aux::bitfieldString<MemoryBarrierMask>(value);
    return stream;
}


} // namespace gl

namespace gl
{


std::ostream & operator<<(std::ostream & stream, const OcclusionQueryEventMaskAMD & value)
{
    stream << glbinding::aux::bitfieldString<OcclusionQueryEventMaskAMD>(value);
    return stream;
}


} // namespace gl

namespace gl
{


std::ostream & operator<<(std::ostream & stream, const PathFontStyle & value)
{
    stream << glbinding::aux::bitfieldString<PathFontStyle>(value);
    return stream;
}


} // namespace gl

namespace gl
{


std::ostream & operator<<(std::ostream & stream, const PathMetricMask & value)
{
    stream << glbinding::aux::bitfieldString<PathMetricMask>(value);
    return stream;
}


} // namespace gl

namespace gl
{


std::ostream & operator<<(std::ostream & stream, const PathRenderingMaskNV & value)
{
    stream << glbinding::aux::bitfieldString<PathRenderingMaskNV>(value);
    return stream;
}


} // namespace gl

namespace gl
{


std::ostream & operator<<(std::ostream & stream, const PerformanceQueryCapsMaskINTEL & value)
{
    stream << glbinding::aux::bitfieldString<PerformanceQueryCapsMaskINTEL>(value);
    return stream;
}


} // namespace gl

namespace gl
{


std::ostream & operator<<(std::ostream & stream, const SyncObjectMask & value)
{
    stream << glbinding::aux::bitfieldString<SyncObjectMask>(value);
    return stream;
}


} // namespace gl

namespace gl
{


std::ostream & operator<<(std::ostream & stream, const TextureStorageMaskAMD & value)
{
    stream << glbinding::aux::bitfieldString<TextureStorageMaskAMD>(value);
    return stream;
}


} // namespace gl

namespace gl
{


std::ostream & operator<<(std::ostream & stream, const UseProgramStageMask & value)
{
    stream << glbinding::aux::bitfieldString<UseProgramStageMask>(value);
    return stream;
}


} // namespace gl

namespace gl
{


std::ostream & operator<<(std::ostream & stream, const VertexHintsMaskPGI & value)
{
    stream << glbinding::aux::bitfieldString<VertexHintsMaskPGI>(value);
    return stream;
}


} // namespace gl

namespace gl
{


std::ostream & operator<<(std::ostream & stream, const UnusedMask & value)
{
    stream << glbinding::aux::bitfieldString<UnusedMask>(value);
    return stream;
}


} // namespace gl

namespace gl
{


std::ostream & operator<<(std::ostream & stream, const BufferStorageMask & value)
{
    stream << glbinding::aux::bitfieldString<BufferStorageMask>(value);
    return stream;
}


} // namespace gl



namespace glbinding
{


std::ostream & operator<<(std::ostream & stream, const khrbinding::AbstractValue * value)
{
    if (typeid(*value) == typeid(khrbinding::AbstractValue))
    {
        stream << reinterpret_cast<const void*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<gl::GLvoid *>))
    {
        stream << *reinterpret_cast<const Value<gl::GLvoid *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gl::GLextension>))
    {
        stream << *reinterpret_cast<const Value<gl::GLextension>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<gl::GLextension *>))
    {
        stream << *reinterpret_cast<const Value<gl::GLextension *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gl::GLenum>))
    {
        stream << *reinterpret_cast<const Value<gl::GLenum>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<gl::GLenum *>))
    {
        stream << *reinterpret_cast<const Value<gl::GLenum *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gl::GLboolean>))
    {
        stream << *reinterpret_cast<const Value<gl::GLboolean>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<gl::GLboolean *>))
    {
        stream << *reinterpret_cast<const Value<gl::GLboolean *>*>(value);
    }


    // Omit gl::GLbitfield


    // Omit gl::GLvoid

    else if (typeid(*value) == typeid(Value<gl::GLbyte>))
    {
        stream << *reinterpret_cast<const Value<gl::GLbyte>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<gl::GLbyte *>))
    {
        stream << *reinterpret_cast<const Value<gl::GLbyte *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gl::GLshort>))
    {
        stream << *reinterpret_cast<const Value<gl::GLshort>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<gl::GLshort *>))
    {
        stream << *reinterpret_cast<const Value<gl::GLshort *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gl::GLint>))
    {
        stream << *reinterpret_cast<const Value<gl::GLint>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<gl::GLint *>))
    {
        stream << *reinterpret_cast<const Value<gl::GLint *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gl::GLclampx>))
    {
        stream << *reinterpret_cast<const Value<gl::GLclampx>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<gl::GLclampx *>))
    {
        stream << *reinterpret_cast<const Value<gl::GLclampx *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gl::GLubyte>))
    {
        stream << *reinterpret_cast<const Value<gl::GLubyte>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<gl::GLubyte *>))
    {
        stream << *reinterpret_cast<const Value<gl::GLubyte *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gl::GLushort>))
    {
        stream << *reinterpret_cast<const Value<gl::GLushort>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<gl::GLushort *>))
    {
        stream << *reinterpret_cast<const Value<gl::GLushort *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gl::GLuint>))
    {
        stream << *reinterpret_cast<const Value<gl::GLuint>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<gl::GLuint *>))
    {
        stream << *reinterpret_cast<const Value<gl::GLuint *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gl::GLsizei>))
    {
        stream << *reinterpret_cast<const Value<gl::GLsizei>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<gl::GLsizei *>))
    {
        stream << *reinterpret_cast<const Value<gl::GLsizei *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gl::GLfloat>))
    {
        stream << *reinterpret_cast<const Value<gl::GLfloat>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<gl::GLfloat *>))
    {
        stream << *reinterpret_cast<const Value<gl::GLfloat *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gl::GLclampf>))
    {
        stream << *reinterpret_cast<const Value<gl::GLclampf>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<gl::GLclampf *>))
    {
        stream << *reinterpret_cast<const Value<gl::GLclampf *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gl::GLdouble>))
    {
        stream << *reinterpret_cast<const Value<gl::GLdouble>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<gl::GLdouble *>))
    {
        stream << *reinterpret_cast<const Value<gl::GLdouble *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gl::GLclampd>))
    {
        stream << *reinterpret_cast<const Value<gl::GLclampd>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<gl::GLclampd *>))
    {
        stream << *reinterpret_cast<const Value<gl::GLclampd *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gl::GLeglClientBufferEXT>))
    {
        stream << *reinterpret_cast<const Value<gl::GLeglClientBufferEXT>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<gl::GLeglClientBufferEXT *>))
    {
        stream << *reinterpret_cast<const Value<gl::GLeglClientBufferEXT *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gl::GLeglImageOES>))
    {
        stream << *reinterpret_cast<const Value<gl::GLeglImageOES>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<gl::GLeglImageOES *>))
    {
        stream << *reinterpret_cast<const Value<gl::GLeglImageOES *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gl::GLchar>))
    {
        stream << *reinterpret_cast<const Value<gl::GLchar>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<gl::GLchar *>))
    {
        stream << *reinterpret_cast<const Value<gl::GLchar *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gl::GLcharARB>))
    {
        stream << *reinterpret_cast<const Value<gl::GLcharARB>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<gl::GLcharARB *>))
    {
        stream << *reinterpret_cast<const Value<gl::GLcharARB *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gl::GLhandleARB>))
    {
        stream << *reinterpret_cast<const Value<gl::GLhandleARB>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<gl::GLhandleARB *>))
    {
        stream << *reinterpret_cast<const Value<gl::GLhandleARB *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gl::GLhalfARB>))
    {
        stream << *reinterpret_cast<const Value<gl::GLhalfARB>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<gl::GLhalfARB *>))
    {
        stream << *reinterpret_cast<const Value<gl::GLhalfARB *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gl::GLhalf>))
    {
        stream << *reinterpret_cast<const Value<gl::GLhalf>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<gl::GLhalf *>))
    {
        stream << *reinterpret_cast<const Value<gl::GLhalf *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gl::GLfixed>))
    {
        stream << *reinterpret_cast<const Value<gl::GLfixed>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<gl::GLfixed *>))
    {
        stream << *reinterpret_cast<const Value<gl::GLfixed *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gl::GLintptr>))
    {
        stream << *reinterpret_cast<const Value<gl::GLintptr>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<gl::GLintptr *>))
    {
        stream << *reinterpret_cast<const Value<gl::GLintptr *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gl::GLsizeiptr>))
    {
        stream << *reinterpret_cast<const Value<gl::GLsizeiptr>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<gl::GLsizeiptr *>))
    {
        stream << *reinterpret_cast<const Value<gl::GLsizeiptr *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gl::GLint64>))
    {
        stream << *reinterpret_cast<const Value<gl::GLint64>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<gl::GLint64 *>))
    {
        stream << *reinterpret_cast<const Value<gl::GLint64 *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gl::GLuint64>))
    {
        stream << *reinterpret_cast<const Value<gl::GLuint64>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<gl::GLuint64 *>))
    {
        stream << *reinterpret_cast<const Value<gl::GLuint64 *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gl::GLintptrARB>))
    {
        stream << *reinterpret_cast<const Value<gl::GLintptrARB>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<gl::GLintptrARB *>))
    {
        stream << *reinterpret_cast<const Value<gl::GLintptrARB *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gl::GLsizeiptrARB>))
    {
        stream << *reinterpret_cast<const Value<gl::GLsizeiptrARB>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<gl::GLsizeiptrARB *>))
    {
        stream << *reinterpret_cast<const Value<gl::GLsizeiptrARB *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gl::GLint64EXT>))
    {
        stream << *reinterpret_cast<const Value<gl::GLint64EXT>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<gl::GLint64EXT *>))
    {
        stream << *reinterpret_cast<const Value<gl::GLint64EXT *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gl::GLuint64EXT>))
    {
        stream << *reinterpret_cast<const Value<gl::GLuint64EXT>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<gl::GLuint64EXT *>))
    {
        stream << *reinterpret_cast<const Value<gl::GLuint64EXT *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gl::GLsync>))
    {
        stream << *reinterpret_cast<const Value<gl::GLsync>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<gl::GLsync *>))
    {
        stream << *reinterpret_cast<const Value<gl::GLsync *>*>(value);
    }


    // Omit gl::_cl_context


    // Omit gl::_cl_event

    else if (typeid(*value) == typeid(Value<gl::GLDEBUGPROC>))
    {
        stream << *reinterpret_cast<const Value<gl::GLDEBUGPROC>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<gl::GLDEBUGPROC *>))
    {
        stream << *reinterpret_cast<const Value<gl::GLDEBUGPROC *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gl::GLDEBUGPROCARB>))
    {
        stream << *reinterpret_cast<const Value<gl::GLDEBUGPROCARB>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<gl::GLDEBUGPROCARB *>))
    {
        stream << *reinterpret_cast<const Value<gl::GLDEBUGPROCARB *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gl::GLDEBUGPROCKHR>))
    {
        stream << *reinterpret_cast<const Value<gl::GLDEBUGPROCKHR>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<gl::GLDEBUGPROCKHR *>))
    {
        stream << *reinterpret_cast<const Value<gl::GLDEBUGPROCKHR *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gl::GLDEBUGPROCAMD>))
    {
        stream << *reinterpret_cast<const Value<gl::GLDEBUGPROCAMD>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<gl::GLDEBUGPROCAMD *>))
    {
        stream << *reinterpret_cast<const Value<gl::GLDEBUGPROCAMD *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gl::GLhalfNV>))
    {
        stream << *reinterpret_cast<const Value<gl::GLhalfNV>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<gl::GLhalfNV *>))
    {
        stream << *reinterpret_cast<const Value<gl::GLhalfNV *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gl::GLvdpauSurfaceNV>))
    {
        stream << *reinterpret_cast<const Value<gl::GLvdpauSurfaceNV>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<gl::GLvdpauSurfaceNV *>))
    {
        stream << *reinterpret_cast<const Value<gl::GLvdpauSurfaceNV *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gl::GLVULKANPROCNV>))
    {
        stream << *reinterpret_cast<const Value<gl::GLVULKANPROCNV>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<gl::GLVULKANPROCNV *>))
    {
        stream << *reinterpret_cast<const Value<gl::GLVULKANPROCNV *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gl::GLuint_array_2>))
    {
        stream << *reinterpret_cast<const Value<gl::GLuint_array_2>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<gl::GLuint_array_2 *>))
    {
        stream << *reinterpret_cast<const Value<gl::GLuint_array_2 *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gl::AttribMask>))
    {
        stream << *reinterpret_cast<const Value<gl::AttribMask>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<gl::AttribMask *>))
    {
        stream << *reinterpret_cast<const Value<gl::AttribMask *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gl::BufferAccessMask>))
    {
        stream << *reinterpret_cast<const Value<gl::BufferAccessMask>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<gl::BufferAccessMask *>))
    {
        stream << *reinterpret_cast<const Value<gl::BufferAccessMask *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gl::ClearBufferMask>))
    {
        stream << *reinterpret_cast<const Value<gl::ClearBufferMask>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<gl::ClearBufferMask *>))
    {
        stream << *reinterpret_cast<const Value<gl::ClearBufferMask *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gl::ClientAttribMask>))
    {
        stream << *reinterpret_cast<const Value<gl::ClientAttribMask>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<gl::ClientAttribMask *>))
    {
        stream << *reinterpret_cast<const Value<gl::ClientAttribMask *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gl::ContextFlagMask>))
    {
        stream << *reinterpret_cast<const Value<gl::ContextFlagMask>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<gl::ContextFlagMask *>))
    {
        stream << *reinterpret_cast<const Value<gl::ContextFlagMask *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gl::ContextProfileMask>))
    {
        stream << *reinterpret_cast<const Value<gl::ContextProfileMask>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<gl::ContextProfileMask *>))
    {
        stream << *reinterpret_cast<const Value<gl::ContextProfileMask *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gl::FfdMaskSGIX>))
    {
        stream << *reinterpret_cast<const Value<gl::FfdMaskSGIX>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<gl::FfdMaskSGIX *>))
    {
        stream << *reinterpret_cast<const Value<gl::FfdMaskSGIX *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gl::FragmentShaderColorModMaskATI>))
    {
        stream << *reinterpret_cast<const Value<gl::FragmentShaderColorModMaskATI>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<gl::FragmentShaderColorModMaskATI *>))
    {
        stream << *reinterpret_cast<const Value<gl::FragmentShaderColorModMaskATI *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gl::FragmentShaderDestMaskATI>))
    {
        stream << *reinterpret_cast<const Value<gl::FragmentShaderDestMaskATI>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<gl::FragmentShaderDestMaskATI *>))
    {
        stream << *reinterpret_cast<const Value<gl::FragmentShaderDestMaskATI *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gl::FragmentShaderDestModMaskATI>))
    {
        stream << *reinterpret_cast<const Value<gl::FragmentShaderDestModMaskATI>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<gl::FragmentShaderDestModMaskATI *>))
    {
        stream << *reinterpret_cast<const Value<gl::FragmentShaderDestModMaskATI *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gl::MapBufferUsageMask>))
    {
        stream << *reinterpret_cast<const Value<gl::MapBufferUsageMask>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<gl::MapBufferUsageMask *>))
    {
        stream << *reinterpret_cast<const Value<gl::MapBufferUsageMask *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gl::MemoryBarrierMask>))
    {
        stream << *reinterpret_cast<const Value<gl::MemoryBarrierMask>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<gl::MemoryBarrierMask *>))
    {
        stream << *reinterpret_cast<const Value<gl::MemoryBarrierMask *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gl::OcclusionQueryEventMaskAMD>))
    {
        stream << *reinterpret_cast<const Value<gl::OcclusionQueryEventMaskAMD>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<gl::OcclusionQueryEventMaskAMD *>))
    {
        stream << *reinterpret_cast<const Value<gl::OcclusionQueryEventMaskAMD *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gl::PathFontStyle>))
    {
        stream << *reinterpret_cast<const Value<gl::PathFontStyle>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<gl::PathFontStyle *>))
    {
        stream << *reinterpret_cast<const Value<gl::PathFontStyle *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gl::PathMetricMask>))
    {
        stream << *reinterpret_cast<const Value<gl::PathMetricMask>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<gl::PathMetricMask *>))
    {
        stream << *reinterpret_cast<const Value<gl::PathMetricMask *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gl::PathRenderingMaskNV>))
    {
        stream << *reinterpret_cast<const Value<gl::PathRenderingMaskNV>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<gl::PathRenderingMaskNV *>))
    {
        stream << *reinterpret_cast<const Value<gl::PathRenderingMaskNV *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gl::PerformanceQueryCapsMaskINTEL>))
    {
        stream << *reinterpret_cast<const Value<gl::PerformanceQueryCapsMaskINTEL>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<gl::PerformanceQueryCapsMaskINTEL *>))
    {
        stream << *reinterpret_cast<const Value<gl::PerformanceQueryCapsMaskINTEL *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gl::SyncObjectMask>))
    {
        stream << *reinterpret_cast<const Value<gl::SyncObjectMask>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<gl::SyncObjectMask *>))
    {
        stream << *reinterpret_cast<const Value<gl::SyncObjectMask *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gl::TextureStorageMaskAMD>))
    {
        stream << *reinterpret_cast<const Value<gl::TextureStorageMaskAMD>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<gl::TextureStorageMaskAMD *>))
    {
        stream << *reinterpret_cast<const Value<gl::TextureStorageMaskAMD *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gl::UseProgramStageMask>))
    {
        stream << *reinterpret_cast<const Value<gl::UseProgramStageMask>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<gl::UseProgramStageMask *>))
    {
        stream << *reinterpret_cast<const Value<gl::UseProgramStageMask *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gl::VertexHintsMaskPGI>))
    {
        stream << *reinterpret_cast<const Value<gl::VertexHintsMaskPGI>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<gl::VertexHintsMaskPGI *>))
    {
        stream << *reinterpret_cast<const Value<gl::VertexHintsMaskPGI *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gl::UnusedMask>))
    {
        stream << *reinterpret_cast<const Value<gl::UnusedMask>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<gl::UnusedMask *>))
    {
        stream << *reinterpret_cast<const Value<gl::UnusedMask *>*>(value);
    }

    else if (typeid(*value) == typeid(Value<gl::BufferStorageMask>))
    {
        stream << *reinterpret_cast<const Value<gl::BufferStorageMask>*>(value);
    }
    
    else if (typeid(*value) == typeid(Value<gl::BufferStorageMask *>))
    {
        stream << *reinterpret_cast<const Value<gl::BufferStorageMask *>*>(value);
    }

    else // expect an AbstractValue with a pointer in first member
    {
        stream << *reinterpret_cast<const Value<void *>*>(value);
    }

    return stream;
}

template <>
std::ostream & operator<<(std::ostream & stream, const Value<gl::GLenum> & value)
{
    const auto name = aux::Meta::getString(value.value());
    stream.write(name.c_str(), static_cast<std::streamsize>(name.size()));

    return stream;
}

/*template <>
std::ostream & operator<<(std::ostream & stream, const Value<gl::GLbitfield> & value)
{
    std::stringstream ss;
    ss << "0x" << std::hex << static_cast<unsigned>(value.value());
    stream << ss.str();

    return stream;
}*/

template <>
std::ostream & operator<<(std::ostream & stream, const Value<gl::GLboolean> & value)
{
    auto name = aux::Meta::getString(value.value());
    stream.write(name.c_str(), static_cast<std::streamsize>(name.size()));

    return stream;
}

template <>
std::ostream & operator<<(std::ostream & stream, const Value<gl::GLubyte *> & value)
{
    auto s = glbinding::aux::wrapString(reinterpret_cast<const char*>(value.value()));
    stream.write(s.c_str(), static_cast<std::streamsize>(s.size()));

    return stream;
}

template <>
std::ostream & operator<<(std::ostream & stream, const Value<gl::GLchar *> & value)
{
    auto s = glbinding::aux::wrapString(reinterpret_cast<const char*>(value.value()));
    stream.write(s.c_str(), static_cast<std::streamsize>(s.size()));

    return stream;
}

template <>
std::ostream & operator<<(std::ostream & stream, const Value<gl::GLuint_array_2> & value)
{
    std::stringstream ss;
    ss << "{ " << value.value()[0] << ", " << value.value()[1] << " }";
    stream << ss.str();

    return stream;
}


} // namespace glbinding
