#include <iostream>
#include "SGL/SGL.hpp"

#define WIN_WIDTH 640
#define WIN_HEIGHT 480
#define FPS 60
#define WHITE {255,255,255,255}
#define SGL_TRANSPARENT {0,0,0,0}

void hello() {
	SDL_Log("hello pretty angel");
}

int main()
{
	SDL_Init(SDL_INIT_EVERYTHING);
	TTF_Init();

	SGL_Window window = SGL_Window("test title", 640, 480, {51,51,51});
	SGL_Font roboto18("fonts/Roboto-Regular.ttf", 18, SGL_BOLD | SGL_ITALIC | SGL_UNDERLINE | SGL_STRIKETHROUGH);

	SGL_StackPanel stack1(&window);
	SGL_StackPanel stack2(&stack1);
	SGL_StackPanel stack3(&window);
	SGL_StackPanel stack4(&stack2);
	SGL_StackPanel stack5(&stack4);

	new SGL_Label(&stack1, "label1", {0,0,100,100}, {0,255,128,32}, &roboto18, WHITE);
	new SGL_Label(&stack2, "label2", {100,0,100,100}, SGL_TRANSPARENT, &roboto18, WHITE);
	new SGL_Button(&stack1, "button1", hello, {0,100,100,100}, {255,255,0,128}, &roboto18, WHITE);
	new SGL_Button(&stack5, "button2", [](){SDL_Log("IAMGOD?XD");}, {100,100,100,100}, SGL_TRANSPARENT, &roboto18, WHITE);

	window.mainloop();
	window.destroy();
	TTF_Quit();
	SDL_Quit();
	return 0;
}
