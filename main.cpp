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

	SDL_Window *window = SDL_CreateWindow(
		"my window",
		SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
		WIN_WIDTH, WIN_HEIGHT,
		SDL_WINDOW_RESIZABLE
	);
	SDL_Renderer *renderer = SDL_CreateRenderer(
		window, -1,
		SDL_RENDERER_ACCELERATED | SDL_RENDERER_TARGETTEXTURE
	);

	SGL_Parent parent(renderer);
	new SGL_Label(&parent, SGL_Rect(10,200,200,50), SGL_Color(0,128,128,255), "sample text", roboto24, SGL_Color(255,255,255,255));
	
	SDL_Event event;
	bool running = true;
	Uint32 frame_start;
	while (running) {
		frame_start = SDL_GetTicks();
		while (SDL_PollEvent(&event)) {
			if (event.type == SDL_QUIT) {
				running = false;
				break;
			}
		}

		SDL_SetRenderDrawColor(renderer, 51, 51, 51, 255);
		SDL_RenderClear(renderer);

		parent.draw();

		SDL_RenderPresent(renderer);
		if ((1000/FPS) > SDL_GetTicks() - frame_start) {
			SDL_Delay(1000/FPS - (SDL_GetTicks() - frame_start));	
		}
	}

	SDL_DestroyWindow(window);
	TTF_Quit();
	SDL_Quit();
	return 0;
}
