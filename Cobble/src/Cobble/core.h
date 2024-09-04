#pragma once

#ifdef CB_PLATFORM_WINDOWS
	#ifdef COBBLE_BUILD_DLL
		#define COBBLE_API _declspec(dllexport)
	#else
		#define COBBLE_API _declspec(dllimport)
	#endif
#else
	#error Cobble currently supports Windows only!
#endif