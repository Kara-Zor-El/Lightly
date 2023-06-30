
#ifndef LIGHTLYCOMMON_EXPORT_H
#define LIGHTLYCOMMON_EXPORT_H

#ifdef LIGHTLYCOMMON_STATIC_DEFINE
#  define LIGHTLYCOMMON_EXPORT
#  define LIGHTLYCOMMON_NO_EXPORT
#else
#  ifndef LIGHTLYCOMMON_EXPORT
#    ifdef lightlycommon6_EXPORTS
        /* We are building this library */
#      define LIGHTLYCOMMON_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define LIGHTLYCOMMON_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef LIGHTLYCOMMON_NO_EXPORT
#    define LIGHTLYCOMMON_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef LIGHTLYCOMMON_DEPRECATED
#  define LIGHTLYCOMMON_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef LIGHTLYCOMMON_DEPRECATED_EXPORT
#  define LIGHTLYCOMMON_DEPRECATED_EXPORT LIGHTLYCOMMON_EXPORT LIGHTLYCOMMON_DEPRECATED
#endif

#ifndef LIGHTLYCOMMON_DEPRECATED_NO_EXPORT
#  define LIGHTLYCOMMON_DEPRECATED_NO_EXPORT LIGHTLYCOMMON_NO_EXPORT LIGHTLYCOMMON_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef LIGHTLYCOMMON_NO_DEPRECATED
#    define LIGHTLYCOMMON_NO_DEPRECATED
#  endif
#endif

#endif /* LIGHTLYCOMMON_EXPORT_H */
