#include "SGL_EventHandler.hpp"
SDL_Rect SGL_Rect(int x, int y, int w, int h);

SGL_EventHandler::SGL_EventHandler(SGL_Window* window) {
    _window = window;
}

void SGL_EventHandler::handleEvents() {
    SDL_Event event;
    SDL_Rect btnrect = SGL_Rect(10,200,200,50);
    while (SDL_PollEvent(&event)) {
        if (event.type == SDL_QUIT) {
            _window->stop();
            break;
        }
        if (event.type == SDL_MOUSEBUTTONDOWN) {
            
        }
        if (event.type == SDL_MOUSEBUTTONUP) {
            if (event.button.button = SDL_BUTTON_LEFT) {
                if (event.motion.x >= btnrect.x && event.motion.x <= btnrect.x + btnrect.w
                && event.motion.y >= btnrect.y && event.motion.y <= btnrect.y + btnrect.h) {
                    SDL_Log("Hello World!\n");
                }
                else {
                    SDL_Log("press babyyy\n");
                }
            }
        }
    }
}