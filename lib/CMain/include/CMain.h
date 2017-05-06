#ifndef CMAIN_H
#define CMAIN_H

#ifdef CMAIN_DYNAMIC
#ifdef CMAIN_BUILD_DLL
#define CMAIN_DECLSPEC __declspec(dllexport)
#else 
#define CMAIN_DECLSPEC __declspec(dllimport)
#endif
#else 
#define CMAIN_DECLSPEC
#endif

//#include "InputSettings.h"

CMAIN_DECLSPEC extern char** _argv;
CMAIN_DECLSPEC extern int _argc;

// Global input settings.
//extern CMAIN_DECLSPEC CInputSettings g_InputSettings;

#endif 