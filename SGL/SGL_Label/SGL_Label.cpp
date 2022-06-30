#include "SGL_Label.hpp"

SGL_Label::SGL_Label(SGL_ParentType* parent, std::string text, SDL_Rect rect, SDL_Color bg, SGL_Font* font, SDL_Color fg)
    : _parent(parent), _text(text), _rect(rect), _bg(bg), _font(font), _fg(fg) {
    _parent->addWidget(this);
    _hittable = false;
    _calc_text();
}

SGL_Label::SGL_Label(SGL_Window* window, std::string text, SDL_Rect rect, SDL_Color bg, SGL_Font* font, SDL_Color fg)
    : _text(text), _rect(rect), _bg(bg), _font(font), _fg(fg) {
    _parent = window->getRootParent();
    _parent->addWidget(this);
    _hittable = false;
    _calc_text();
}

void SGL_Label::draw(SDL_Renderer* renderer) {
    if (_bg.a != 0) {
        SDL_SetRenderDrawColor(renderer, _bg.r, _bg.g, _bg.b, _bg.a);
        SDL_RenderFillRect(renderer, &_rect);
    }
    if (_text != "") {
        SDL_RenderCopy(renderer, _text_texture, nullptr, &_text_rect);
    }
}

void SGL_Label::_calc_text() {
    SDL_Surface* surface = TTF_RenderText_Blended(_font->getObject(), _text.c_str(), _fg); 
	_text_texture = SDL_CreateTextureFromSurface(_parent->getRenderer(), surface);
    SDL_FreeSurface(surface);
    int x, y, w, h;
    TTF_SizeUTF8(_font->getObject(), _text.c_str(), &w,&h);
	x = _rect.x + _rect.w/2 - w/2;
	y = _rect.y + _rect.h/2 - h/2;
	_text_rect = {x, y, w, h};
}

SDL_Rect SGL_Label::getRect() {
    return _rect;
}

bool SGL_Label::isHittable() {
    return _hittable;
}