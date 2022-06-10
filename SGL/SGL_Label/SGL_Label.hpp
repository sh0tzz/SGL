#pragma once
#include <SDL.h>
#include <string>
#include "../SGL_Widget/SGL_Widget.hpp"
#include "../SGL_Parent/SGL_Parent.hpp"

class SGL_Label : public SGL_Widget {
public:
    SGL_Label(SGL_Parent *parent, SDL_Rect rect, std::string text, SDL_Color color);
    void draw(SDL_Renderer *renderer);
private:
    SGL_Parent *_parent;
    SDL_Rect _rect;
    SDL_Color _color;
    std::string _text;
};