#include <SDL.h>
#include <SDL2/SDL_ttf.h>
#include <iostream>
#include "SGL/SGL.hpp"

#define WIN_WIDTH 640
#define WIN_HEIGHT 480
#define FPS 60

SDL_Rect SGL_Rect(int x, int y, int w, int h);
SDL_Color SGL_Color(Uint8 r, Uint8 g, Uint8 b, Uint8 a);

int main()
{
	SDL_Init(SDL_INIT_EVERYTHING);

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

	SDL_Event event;
	bool running = true;
	Uint32 frame_start;

	SGL_Parent parent(renderer);
	new SGL_Label(&parent, SGL_Rect(100,200,30,50), "hello world", SGL_Color(255,0,255,255));
	new SGL_Label(&parent, SGL_Rect(100,250,40,50), "hello world", SGL_Color(255,0,0,255));
	new SGL_Label(&parent, SGL_Rect(80,220,30,50), "hello world", SGL_Color(255,255,255,255));
	new SGL_Label(&parent, SGL_Rect(300,500,100,100), "hello world", SGL_Color(0,0,255,255));

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
