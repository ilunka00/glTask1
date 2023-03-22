#include "Application/Application.h"

#include <tchar.h>

int _tmain(int argc, _TCHAR* argv[])
{

	Application app;

	app.Init();
	app.EntryPoint();
	app.clean();


	return 0;
}

