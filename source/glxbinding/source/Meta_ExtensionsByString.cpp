
#include "Meta_Maps.h"

#include <glxbinding/glx/extension.h>


using namespace glx;


namespace glxbinding
{


const std::unordered_map<std::string, GLextension> Meta_ExtensionsByString_-1 =
{
    { "GLX_3DFX_multisample", GLextension::GLX_3DFX_multisample },
    { "GLX_AMD_gpu_association", GLextension::GLX_AMD_gpu_association },
    { "GLX_ARB_context_flush_control", GLextension::GLX_ARB_context_flush_control },
    { "GLX_ARB_create_context", GLextension::GLX_ARB_create_context },
    { "GLX_ARB_create_context_no_error", GLextension::GLX_ARB_create_context_no_error },
    { "GLX_ARB_create_context_profile", GLextension::GLX_ARB_create_context_profile },
    { "GLX_ARB_create_context_robustness", GLextension::GLX_ARB_create_context_robustness },
    { "GLX_ARB_fbconfig_float", GLextension::GLX_ARB_fbconfig_float },
    { "GLX_ARB_framebuffer_sRGB", GLextension::GLX_ARB_framebuffer_sRGB },
    { "GLX_ARB_get_proc_address", GLextension::GLX_ARB_get_proc_address },
    { "GLX_ARB_multisample", GLextension::GLX_ARB_multisample },
    { "GLX_ARB_robustness_application_isolation", GLextension::GLX_ARB_robustness_application_isolation },
    { "GLX_ARB_robustness_share_group_isolation", GLextension::GLX_ARB_robustness_share_group_isolation },
    { "GLX_ARB_vertex_buffer_object", GLextension::GLX_ARB_vertex_buffer_object },
    { "GLX_EXT_buffer_age", GLextension::GLX_EXT_buffer_age },
    { "GLX_EXT_create_context_es2_profile", GLextension::GLX_EXT_create_context_es2_profile },
    { "GLX_EXT_create_context_es_profile", GLextension::GLX_EXT_create_context_es_profile },
    { "GLX_EXT_fbconfig_packed_float", GLextension::GLX_EXT_fbconfig_packed_float },
    { "GLX_EXT_framebuffer_sRGB", GLextension::GLX_EXT_framebuffer_sRGB },
    { "GLX_EXT_import_context", GLextension::GLX_EXT_import_context },
    { "GLX_EXT_libglvnd", GLextension::GLX_EXT_libglvnd },
    { "GLX_EXT_no_config_context", GLextension::GLX_EXT_no_config_context },
    { "GLX_EXT_stereo_tree", GLextension::GLX_EXT_stereo_tree },
    { "GLX_EXT_swap_control", GLextension::GLX_EXT_swap_control },
    { "GLX_EXT_swap_control_tear", GLextension::GLX_EXT_swap_control_tear },
    { "GLX_EXT_texture_from_pixmap", GLextension::GLX_EXT_texture_from_pixmap },
    { "GLX_EXT_visual_info", GLextension::GLX_EXT_visual_info },
    { "GLX_EXT_visual_rating", GLextension::GLX_EXT_visual_rating },
    { "GLX_INTEL_swap_event", GLextension::GLX_INTEL_swap_event },
    { "GLX_MESA_agp_offset", GLextension::GLX_MESA_agp_offset },
    { "GLX_MESA_copy_sub_buffer", GLextension::GLX_MESA_copy_sub_buffer },
    { "GLX_MESA_pixmap_colormap", GLextension::GLX_MESA_pixmap_colormap },
    { "GLX_MESA_query_renderer", GLextension::GLX_MESA_query_renderer },
    { "GLX_MESA_release_buffers", GLextension::GLX_MESA_release_buffers },
    { "GLX_MESA_set_3dfx_mode", GLextension::GLX_MESA_set_3dfx_mode },
    { "GLX_MESA_swap_control", GLextension::GLX_MESA_swap_control },
    { "GLX_NV_copy_buffer", GLextension::GLX_NV_copy_buffer },
    { "GLX_NV_copy_image", GLextension::GLX_NV_copy_image },
    { "GLX_NV_delay_before_swap", GLextension::GLX_NV_delay_before_swap },
    { "GLX_NV_float_buffer", GLextension::GLX_NV_float_buffer },
    { "GLX_NV_multisample_coverage", GLextension::GLX_NV_multisample_coverage },
    { "GLX_NV_present_video", GLextension::GLX_NV_present_video },
    { "GLX_NV_robustness_video_memory_purge", GLextension::GLX_NV_robustness_video_memory_purge },
    { "GLX_NV_swap_group", GLextension::GLX_NV_swap_group },
    { "GLX_NV_video_capture", GLextension::GLX_NV_video_capture },
    { "GLX_NV_video_out", GLextension::GLX_NV_video_out },
    { "GLX_OML_swap_method", GLextension::GLX_OML_swap_method },
    { "GLX_OML_sync_control", GLextension::GLX_OML_sync_control },
    { "GLX_SGIS_blended_overlay", GLextension::GLX_SGIS_blended_overlay },
    { "GLX_SGIS_multisample", GLextension::GLX_SGIS_multisample },
    { "GLX_SGIS_shared_multisample", GLextension::GLX_SGIS_shared_multisample },
    { "GLX_SGIX_dmbuffer", GLextension::GLX_SGIX_dmbuffer },
    { "GLX_SGIX_fbconfig", GLextension::GLX_SGIX_fbconfig },
    { "GLX_SGIX_hyperpipe", GLextension::GLX_SGIX_hyperpipe },
    { "GLX_SGIX_pbuffer", GLextension::GLX_SGIX_pbuffer },
    { "GLX_SGIX_swap_barrier", GLextension::GLX_SGIX_swap_barrier },
    { "GLX_SGIX_swap_group", GLextension::GLX_SGIX_swap_group },
    { "GLX_SGIX_video_resize", GLextension::GLX_SGIX_video_resize },
    { "GLX_SGIX_video_source", GLextension::GLX_SGIX_video_source },
    { "GLX_SGIX_visual_select_group", GLextension::GLX_SGIX_visual_select_group },
    { "GLX_SGI_cushion", GLextension::GLX_SGI_cushion },
    { "GLX_SGI_make_current_read", GLextension::GLX_SGI_make_current_read },
    { "GLX_SGI_swap_control", GLextension::GLX_SGI_swap_control },
    { "GLX_SGI_video_sync", GLextension::GLX_SGI_video_sync },
    { "GLX_SUN_get_transparent_index", GLextension::GLX_SUN_get_transparent_index }
};

const std::unordered_map<std::string, GLextension> Meta_ExtensionsByString_0{};

const std::unordered_map<std::string, GLextension> Meta_ExtensionsByString_A{};

const std::unordered_map<std::string, GLextension> Meta_ExtensionsByString_B{};

const std::unordered_map<std::string, GLextension> Meta_ExtensionsByString_C{};

const std::unordered_map<std::string, GLextension> Meta_ExtensionsByString_D{};

const std::unordered_map<std::string, GLextension> Meta_ExtensionsByString_E{};

const std::unordered_map<std::string, GLextension> Meta_ExtensionsByString_F{};

const std::unordered_map<std::string, GLextension> Meta_ExtensionsByString_G{};

const std::unordered_map<std::string, GLextension> Meta_ExtensionsByString_H{};

const std::unordered_map<std::string, GLextension> Meta_ExtensionsByString_I{};

const std::unordered_map<std::string, GLextension> Meta_ExtensionsByString_J{};

const std::unordered_map<std::string, GLextension> Meta_ExtensionsByString_K{};

const std::unordered_map<std::string, GLextension> Meta_ExtensionsByString_L{};

const std::unordered_map<std::string, GLextension> Meta_ExtensionsByString_M{};

const std::unordered_map<std::string, GLextension> Meta_ExtensionsByString_N{};

const std::unordered_map<std::string, GLextension> Meta_ExtensionsByString_O{};

const std::unordered_map<std::string, GLextension> Meta_ExtensionsByString_P{};

const std::unordered_map<std::string, GLextension> Meta_ExtensionsByString_Q{};

const std::unordered_map<std::string, GLextension> Meta_ExtensionsByString_R{};

const std::unordered_map<std::string, GLextension> Meta_ExtensionsByString_S{};

const std::unordered_map<std::string, GLextension> Meta_ExtensionsByString_T{};

const std::unordered_map<std::string, GLextension> Meta_ExtensionsByString_U{};

const std::unordered_map<std::string, GLextension> Meta_ExtensionsByString_V{};

const std::unordered_map<std::string, GLextension> Meta_ExtensionsByString_W{};

const std::unordered_map<std::string, GLextension> Meta_ExtensionsByString_X{};

const std::unordered_map<std::string, GLextension> Meta_ExtensionsByString_Y{};

const std::unordered_map<std::string, GLextension> Meta_ExtensionsByString_Z{};

const std::array<std::unordered_map<std::string, glx::GLextension>, 28> Meta_ExtensionsByStringMaps =
{ {
    Meta_ExtensionsByString_-1,
    Meta_ExtensionsByString_0,
    Meta_ExtensionsByString_A,
    Meta_ExtensionsByString_B,
    Meta_ExtensionsByString_C,
    Meta_ExtensionsByString_D,
    Meta_ExtensionsByString_E,
    Meta_ExtensionsByString_F,
    Meta_ExtensionsByString_G,
    Meta_ExtensionsByString_H,
    Meta_ExtensionsByString_I,
    Meta_ExtensionsByString_J,
    Meta_ExtensionsByString_K,
    Meta_ExtensionsByString_L,
    Meta_ExtensionsByString_M,
    Meta_ExtensionsByString_N,
    Meta_ExtensionsByString_O,
    Meta_ExtensionsByString_P,
    Meta_ExtensionsByString_Q,
    Meta_ExtensionsByString_R,
    Meta_ExtensionsByString_S,
    Meta_ExtensionsByString_T,
    Meta_ExtensionsByString_U,
    Meta_ExtensionsByString_V,
    Meta_ExtensionsByString_W,
    Meta_ExtensionsByString_X,
    Meta_ExtensionsByString_Y,
    Meta_ExtensionsByString_Z
} };


} // namespace glxbinding
