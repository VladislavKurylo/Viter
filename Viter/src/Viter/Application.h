#pragma once

#include "Core.h"

namespace Viter {
	class VITER_API Application 
	{
	public:
		Application();
		virtual ~Application();
		
		void Run();
	};

	//To be defined in client
	Application* CreateApplication();
}
