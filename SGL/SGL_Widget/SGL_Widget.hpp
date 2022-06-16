#pragma once
#include <SDL.h>
#include <string>
#include "../SGL_Parent/SGL_Parent.hpp"
class SGL_Parent;

class SGL_Widget {
public:
    virtual void draw(SDL_Renderer *renderer);
    virtual SDL_Rect getRect();
private:
    SGL_Parent *_parent;
    SDL_Rect _rect;
    SDL_Color _color;
    std::string _text;
};