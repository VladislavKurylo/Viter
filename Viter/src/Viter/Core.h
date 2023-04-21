#pragma once

#ifdef VIT_PLATFORM_WINDOWS
	#ifdef VIT_BUILD_DLL
		#define VITER_API __declspec(dllexport)
	#else
		#define VITER_API __declspec(dllimport)
	#endif
#else
	#error Viter only for Windows
#endif