
#ifndef tflib_EXPORT_H
#define tflib_EXPORT_H

#ifdef tflib_BUILT_AS_STATIC
#  define tflib_EXPORT
#  define TFLIB_NO_EXPORT
#else
#  ifndef tflib_EXPORT
#    ifdef tflib_EXPORTS
        /* We are building this library */
#      define tflib_EXPORT __declspec(dllexport)
#    else
        /* We are using this library */
#      define tflib_EXPORT __declspec(dllimport)
#    endif
#  endif

#  ifndef TFLIB_NO_EXPORT
#    define TFLIB_NO_EXPORT 
#  endif
#endif

#ifndef TFLIB_DEPRECATED
#  define TFLIB_DEPRECATED __declspec(deprecated)
#endif

#ifndef TFLIB_DEPRECATED_EXPORT
#  define TFLIB_DEPRECATED_EXPORT tflib_EXPORT TFLIB_DEPRECATED
#endif

#ifndef TFLIB_DEPRECATED_NO_EXPORT
#  define TFLIB_DEPRECATED_NO_EXPORT TFLIB_NO_EXPORT TFLIB_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef TFLIB_NO_DEPRECATED
#    define TFLIB_NO_DEPRECATED
#  endif
#endif

#endif /* tflib_EXPORT_H */
