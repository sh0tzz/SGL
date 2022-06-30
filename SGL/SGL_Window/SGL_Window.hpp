#pragma once
#include <SDL2/SDL.h>
#include <string>
#include "../SGL_Clock/SGL_Clock.hpp"
#include "../SGL_EventHandler/SGL_EventHandler.hpp"
class SGL_Root;

class SGL_Window {
public:
    SGL_Window(std::string title, int width, int height, SDL_Color bg);
    void destroy();
    bool isRunning();
    void stop();
    void mainloop();
    SGL_Root* getRootParent();
private:
    SDL_Window* _window;
    SDL_Renderer* _renderer;
    SGL_Root* _root_parent;
    SDL_Color _bg;
    bool _running;
};