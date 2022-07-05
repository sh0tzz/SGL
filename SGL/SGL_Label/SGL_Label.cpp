#include "SGL_Label.hpp"

SGL_Label::SGL_Label(SGL_ParentType* parent, std::string text, SDL_Rect rect, SDL_Color bg, SGL_Font* font, SDL_Color fg)
    : _parent(parent), _rect(rect), _bg(bg), _font(font), _fg(fg) {
    _parent->addWidget(this);
    _hittable = false;
    _text = new SGL_Text(_parent->getRenderer(), _rect, _font->getObject(), text, _fg);
}

void SGL_Label::draw(SDL_Renderer* renderer) {
    if (_bg.a != 0) {
        SDL_SetRenderDrawColor(renderer, _bg.r, _bg.g, _bg.b, _bg.a);
        SDL_RenderFillRect(renderer, &_rect);
    }
    SDL_RenderCopy(renderer, _text->getTexture(), nullptr, _text->getRect());
}

SDL_Rect SGL_Label::getRect() {
    return _rect;
}

bool SGL_Label::isHittable() {
    return _hittable;
}