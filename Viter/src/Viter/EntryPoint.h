#pragma once

#ifdef  VIT_PLATFORM_WINDOWS

extern Viter::Application* Viter::CreateApplication();

int main(int argc, char** argv) {
	Viter::Log::Init();
	VIT_CORE_WARN("Initialized log!");
	int a = 5;
	VIT_INFO("Hello! Var={0}", a);

	auto app = Viter::CreateApplication();
	app->Run();
	delete app;
}

#endif 