#include <TibbieEngine.h>

class TestLayer : public Tibbie::Layer{
public:
	TestLayer(): Layer("Test")
	{

	}
	void OnUpdate() override {
		//TB_CLIENT_INFO("Updating");
	}
	void OnEvent(Tibbie::Event &e) override {
		//TB_CLIENT_TRACE(e.ToString());
	}
};

class Sandbox : public Tibbie::Application {
public:
	Sandbox() {
		PushLayer(new TestLayer());
		PushOverlay(new Tibbie::ImGuiLayer());
	}
	~Sandbox() {

	}
};

Tibbie::Application* Tibbie::CreateApplication() {
	return new Sandbox();
}