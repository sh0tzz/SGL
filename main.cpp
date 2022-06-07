#include <SDL.h>
#include <iostream>
#include "SGL/SGL.hpp"

#define WIN_WIDTH 640
#define WIN_HEIGHT 480
#define FPS 60

int main()
{
	SDL_Init(SDL_INIT_EVERYTHING);

	SDL_Window *window = SDL_CreateWindow(
		"my window",
		SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
		WIN_WIDTH, WIN_HEIGHT,
		SDL_WINDOW_RESIZABLE
	);
	SDL_Renderer *renderer = SDL_CreateRenderer(
		window, -1,
		SDL_RENDERER_ACCELERATED | SDL_RENDERER_TARGETTEXTURE
	);

	SDL_Event event;
	bool running = true;
	Uint32 frame_start;

	SGL_Parent parent(renderer);
	SGL_Label(&parent, SGL_MakeRect(100,200,30,50), "hello world", SGL_MakeColor(255,255,255,255));

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
	SDL_Quit();
	return 0;
}
