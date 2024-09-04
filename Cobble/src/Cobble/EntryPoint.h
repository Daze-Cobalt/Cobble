#pragma once

#ifdef CB_PLATFORM_WINDOWS

extern Cobble::Application* Cobble::CreateApplication();

int main(int argc, char** argv) 
{
	auto app = Cobble::CreateApplication();
	app->Run();
	delete app;
}

#endif