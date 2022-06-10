#include "SGL_Label.hpp"

SGL_Label::SGL_Label(SGL_Parent *parent, SDL_Rect rect, std::string text, SDL_Color color) {
    _parent = parent;
    _parent->addWidget(this);
    _rect = rect;
    _text = text;
    _color = color;
}

void SGL_Label::draw(SDL_Renderer *renderer) {
    SDL_SetRenderDrawColor(renderer, _color.r, _color.g, _color.b, _color.a);
    SDL_RenderFillRect(renderer, &_rect);
}