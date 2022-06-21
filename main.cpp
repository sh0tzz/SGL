#include <SDL.h>
#include <SDL2/SDL_ttf.h>
#include <iostream>
#include "SGL/SGL.hpp"

#define WIN_WIDTH 640
#define WIN_HEIGHT 480
#define FPS 60

// for testing
void hello() {
	SDL_Log("hello pretty angel");
}

int main()
{
	SDL_Init(SDL_INIT_EVERYTHING);
	TTF_Init();
	TTF_Font *roboto18 = TTF_OpenFont("fonts/Roboto-Regular.ttf", 18);

	SGL_Window window = SGL_Window("test title", 640, 480);
	SGL_Parent parent = SGL_Parent(&window);
	window.setParent(&parent);

	new SGL_Label(&parent, SGL_Rect(0,0,100,100), SGL_Color(0,255,128,32), "label1", roboto18, SGL_Color(255,255,255,255));
	new SGL_Label(&parent, SGL_Rect(100,0,100,100), SGL_TRANSPARENT, "label2", roboto18, SGL_Color(255,0,0,128));
	new SGL_Button(&parent, SGL_Rect(0, 100, 100, 100), SGL_Color(255, 255, 0, 128), "button1", roboto18, SGL_Color(255,255,255,255), hello);
	new SGL_Button(&parent, SGL_Rect(100, 100, 100, 100), SGL_TRANSPARENT, "button2", roboto18, SGL_Color(0,255,0,255), [](){SDL_Log("IAMGOD?XD");});

	SGL_Clock clock = SGL_Clock(60);
	SGL_EventHandler ehan = SGL_EventHandler(&window);
	while (window.isRunning()) {
		ehan.handleEvents();
		
		SDL_SetRenderDrawColor(window.getRenderer(), 51, 51, 51, 255);
		SDL_RenderClear(window.getRenderer());
		parent.draw();
		SDL_RenderPresent(window.getRenderer());
		
		clock.tick();
	}
	window.destroy();
	TTF_Quit();
	SDL_Quit();
	return 0;
}
