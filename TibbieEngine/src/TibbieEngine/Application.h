#pragma once
#include "Core.h"

namespace Tibbie {

	class TB_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreateApplication();

}
