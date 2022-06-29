#pragma once
#include <SDL2/SDL.h>
#include <string>
#include "../SGL_Parent/SGL_Parent.hpp"
#include "../SGL_Clock/SGL_Clock.hpp"
#include "../SGL_EventHandler/SGL_EventHandler.hpp"
class SGL_Parent;

class SGL_Window {
public:
    SGL_Window(std::string title, int width, int height, SDL_Color bg);
    void destroy();
    bool isRunning();
    void stop();
    void mainloop();
    SGL_Parent* getParent();
private:
    SDL_Window* _window;
    SDL_Renderer* _renderer;
    SGL_Parent* _parent;
    SDL_Color _bg;
    bool _running;
};