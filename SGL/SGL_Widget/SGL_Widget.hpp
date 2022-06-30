#pragma once
#include <SDL2/SDL.h>
#include <string>
#include "../SGL_ParentType/SGL_ParentType.hpp"
class SGL_ParentType;

class SGL_Widget {
public:
    virtual void draw(SDL_Renderer* renderer);
    virtual SDL_Rect getRect();
    virtual bool isHittable();
    virtual void executeCallback();
private:
    SGL_ParentType* _parent;
    SDL_Rect _rect;
    SDL_Color _color;
    std::string _text;
    bool _hittable;
};