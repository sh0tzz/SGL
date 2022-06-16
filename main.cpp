#include <SDL.h>
#include <SDL2/SDL_ttf.h>
#include <iostream>
#include "SGL/SGL.hpp"

#define WIN_WIDTH 640
#define WIN_HEIGHT 480
#define FPS 60

int main()
{
	SDL_Init(SDL_INIT_EVERYTHING);
	TTF_Init();
	TTF_Font *roboto24 = TTF_OpenFont("fonts/Roboto-Regular.ttf", 24);

	SGL_Window window = SGL_Window("test title", 640, 480);

	SGL_Parent parent(&window);
	new SGL_Label(&parent, SGL_Rect(10,200,200,50), SGL_Color(0,255,128,32), "hello world", roboto24, SGL_Color(255,255,255,255));

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
