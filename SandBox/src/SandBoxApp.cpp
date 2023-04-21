#include <Viter.h>

class SandBox : public Viter::Application
{
public:
	SandBox() {

	}
	~SandBox() {

	}
};

Viter::Application* Viter::CreateApplication() {
	return new SandBox();
}