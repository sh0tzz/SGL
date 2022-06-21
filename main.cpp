#include <iostream>
#include "SGL/SGL.hpp"

#define WIN_WIDTH 640
#define WIN_HEIGHT 480
#define FPS 60
#define WHITE {255,255,255,255}

// for testing
void hello() {
	SDL_Log("hello pretty angel");
}

int main()
{
	SDL_Init(SDL_INIT_EVERYTHING);
	TTF_Init();
	SGL_Font roboto18("fonts/Roboto-Regular.ttf", 18, SGL_BOLD | SGL_ITALIC | SGL_UNDERLINE | SGL_STRIKETHROUGH);

	SGL_Window window = SGL_Window("test title", 640, 480);
	SGL_Parent parent = SGL_Parent(&window);
	window.setParent(&parent);

	new SGL_Label(&parent, "label1", {0,0,100,100}, {0,255,128,32}, &roboto18, WHITE);
	new SGL_Label(&parent, "label2", {100,0,100,100}, SGL_TRANSPARENT, &roboto18, WHITE);
	new SGL_Button(&parent, "button1", hello, {0,100,100,100}, {255,255,0,128}, &roboto18, WHITE);
	new SGL_Button(&parent, "button2", [](){SDL_Log("IAMGOD?XD");}, {100,100,100,100}, SGL_TRANSPARENT, &roboto18, WHITE);

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
