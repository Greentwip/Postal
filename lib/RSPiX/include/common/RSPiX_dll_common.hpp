#ifndef RSPIX_DLL_COMMON_HPP
#define RSPIX_DLL_COMMON_HPP

#ifdef RSPIX_DYNAMIC
#ifdef RSPIX_BUILD_DLL
#define RSPIX_DECLSPEC __declspec(dllexport)
#else
#define RSPIX_DECLSPEC __declspec(dllimport)
#endif
#else 
#define RSPIX_DECLSPEC
#endif

#endif