#ifndef POSTAL_COMMON_DLL_HPP
#define POSTAL_COMMON_DLL_HPP

#ifdef POSTAL_COMMON_DYNAMIC
#ifdef POSTAL_COMMON_BUILD_DLL
#define POSTAL_COMMON_DECLSPEC __declspec(dllexport)
#else 
#define POSTAL_COMMON_DECLSPEC __declspec(dllimport)
#endif
#else 
#define POSTAL_COMMON_DECLSPEC
#endif

#endif