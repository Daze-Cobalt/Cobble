#include <Cobble.h>

class Stone : public Cobble::Application
{
public:
	Stone()				// Constructor
	{

	}

	~Stone()			// Destructor
	{

	}
};

Cobble::Application* Cobble::CreateApplication()
{
	return new Stone();
}