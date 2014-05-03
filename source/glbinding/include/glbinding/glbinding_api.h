#pragma once

// NOTE: don't export stl stuff (e.g. containers):
// http://www.unknownroad.com/rtfm/VisualStudio/warningC4251.html
// don't do it: http://support.microsoft.com/kb/q168958/

#ifdef _MSC_VER
#   define GLBINDING_API_EXPORT_DECLARATION __declspec(dllexport)
#   define GLBINDING_API_IMPORT_DECLARATION __declspec(dllimport)
#elif __GNUC__
#	define GLBINDING_API_EXPORT_DECLARATION __attribute__ ((visibility ("default")))
#	define GLBINDING_API_IMPORT_DECLARATION __attribute__ ((visibility ("default")))
#else
#   define GLBINDING_API_EXPORT_DECLARATION
#   define GLBINDING_API_IMPORT_DECLARATION
#endif

#ifndef GLBINDING_STATIC
#ifdef GLBINDING_EXPORTS
#   define GLBINDING_API GLBINDING_API_EXPORT_DECLARATION
#else
#   define GLBINDING_API GLBINDING_API_IMPORT_DECLARATION
#endif
#else
#   define GLBINDING_API
#endif

#ifdef N_DEBUG
#   define IF_DEBUG(statement)
#   define IF_NDEBUG(statement) statement
#else
#   define IF_DEBUG(statement) statement
#   define IF_NDEBUG(statement)
#endif // N_DEBUG

// http://stackoverflow.com/questions/18387640/how-to-deal-with-noexcept-in-visual-studio
#ifndef NOEXCEPT
#   ifdef _MSC_VER
#       define NOEXCEPT
#   else
#       define NOEXCEPT noexcept
#   endif
#endif


/**
 * \namespace glbinding
 *
 * \brief Contains all the core classes that ... functionality.
 *
 * TODO: Detailed documentation for GLBINDING here.
 */
