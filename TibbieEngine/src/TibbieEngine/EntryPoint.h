#pragma once
#include "Application.h"

#ifdef TB_PLATFORM_WINDOWS

extern Tibbie::Application* Tibbie::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Tibbie::CreateApplication();
	app->Run();
	delete app;
	return 0;
}

#endif