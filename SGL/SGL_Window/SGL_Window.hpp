#pragma once
#include <SDL.h>
#include <string>

class SGL_Window {
public:
    SGL_Window(std::string title, int width, int height);
    SDL_Renderer* getRenderer();
    void destroy();
    bool isRunning();
    void stop();
private:
    SDL_Window *_window;
    SDL_Renderer *_renderer;
    bool _running;
};