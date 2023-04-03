#pragma once

#ifdef TB_PLATFORM_WINDOWS
	#ifdef TIBBIEENGINE_BUILD_DLL
		#define TB_API __declspec(dllexport)
	#else
		#define TB_API __declspec(dllimport)
	#endif
#endif
