#pragma once

#include "core.h"

namespace Cobble {

	class COBBLE_API Application
	{
	public:
	    Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();

}


