#include <stdio.h>
#include <TibbieEngine.h>

class Sandbox : public Tibbie::Application {
public:
	Sandbox() {

	}
	~Sandbox() {

	}

};

Tibbie::Application* Tibbie::CreateApplication() {
	return new Sandbox();
}