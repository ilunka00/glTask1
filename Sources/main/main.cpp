#include "pch.h"

#include "Application/Application.h"

#include <tchar.h>

int _tmain(int argc, _TCHAR* argv[])
{

	Application app;

	app.Init();
	app.EntryPoint();
	app.Clean();

	return 0;
}