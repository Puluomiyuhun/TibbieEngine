#include "Application.h"

namespace Tibbie {
	Application::Application() {

	}
	Application::~Application() {

	}

	void Application:: Run() {
		while (true) {

		}
	}
	Application* CreateApplication()
	{
		return new Application();
	}
}