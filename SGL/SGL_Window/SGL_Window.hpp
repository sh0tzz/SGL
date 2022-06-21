#pragma once
#include <SDL2/SDL.h>
#include <string>
#include "../SGL_Parent/SGL_Parent.hpp"
class SGL_Parent;

class SGL_Window {
public:
    SGL_Window(std::string title, int width, int height);
    SDL_Renderer* getRenderer();
    void destroy();
    bool isRunning();
    void stop();
    SGL_Parent* getParent();
    void setParent(SGL_Parent* parent);
private:
    SDL_Window* _window;
    SDL_Renderer* _renderer;
    SGL_Parent* _parent;
    bool _running;
};