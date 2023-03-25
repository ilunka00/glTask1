#pragma once

#include <string>
#include <list>
#include "Drawable/Drawable.h"
#include "Sprite/Sprite.h"

#include "esUtils/esUtil.h"

class Application final
{
public:
	// default {ctor} and {dtor}
	//
	Application();
	~Application();

	// lock copy and assigment
	//
	Application(const Application& other) = delete;
	Application& operator=(const Application& other) = delete;

	// initing window and ogl context
	//
	void Init();

	// mouse callback
	//
	void Mouse(float& x, float& y);
	void MouseClick(const bool& isLeft);

	// keyboard callback
	//
	void Key(const unsigned char& key,const bool& bIsPressed);

	// frame app
	//
	void Frame();

	// update callback 
	//
	void Update(float& deltaTime);

	// draw callback from ogl
	//
	void Draw();

	// clean up 
	//
	void Clean();

	// start of window's entry point here
	//
	void EntryPoint();
protected:
	// making window
	//
	void _MakeWindow(const std::string& sTitle,const unsigned int& uiWidth,const unsigned int& uiHeight);
public:
	// windows proc
	// exception for window proc call
	//
	LRESULT WindowProc(HWND& hWnd, UINT& uMsg, WPARAM& wParam, LPARAM& lParam);

protected:
	// create ogl context and surface
	//
	void _InitOGL();

protected:
	// window handle
	//
	HWND _hwnd;

	/// EGL context
	//
	EGLContext eglContext;

	/// EGL display
	//
	EGLDisplay eglDisplay;
	EGLSurface eglSurface;

	// drawable primitive
	// 
	Drawable _drawable;

	// sprite to draw
	//
	std::list <Sprite> _sprite;
	unsigned int _uiSprites;

	// for primitive timer
	//
	ULONGLONG _lastTime;
	ULONGLONG _curTime;
};