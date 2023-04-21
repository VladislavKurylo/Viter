#pragma once

#ifdef  VIT_PLATFORM_WINDOWS

extern Viter::Application* Viter::CreateApplication();

int main(int argc, char** argv) {
	auto app = Viter::CreateApplication();
	app->Run();
	delete app;
}

#endif 