#pragma once
#include <SDL2/SDL.h>
#include <string>

class SGL_Widget {
public:
    virtual void draw(SDL_Renderer* renderer);
    virtual SDL_Rect getRect();
    virtual bool isHittable();
    virtual void executeCallback();
private:
    SDL_Rect _rect;
    bool _hittable;
};