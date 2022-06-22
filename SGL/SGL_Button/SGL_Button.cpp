#include "SGL_Button.hpp"

SGL_Button::SGL_Button(SGL_Parent* parent, std::string text, std::function<void()> callback, SDL_Rect rect, SDL_Color bg, SGL_Font* font, SDL_Color fg)
    : _parent(parent), _text(text), _callback(callback), _rect(rect), _bg(bg), _font(font), _fg(fg) {
    _parent->addWidget(this);
    _hittable = true;
    _calc_text();
}

void SGL_Button::draw(SDL_Renderer* renderer) {
    if (_bg.a != 0) {
        SDL_SetRenderDrawColor(renderer, _bg.r, _bg.g, _bg.b, _bg.a);
        SDL_RenderFillRect(renderer, &_rect);
    }
    if (_text != "") {
        SDL_RenderCopy(renderer, _text_texture, NULL, &_text_rect);
    }
}

void SGL_Button::_calc_text() {
    SDL_Surface* surface = TTF_RenderText_Blended(_font->getObject(), _text.c_str(), _fg); 
	_text_texture = SDL_CreateTextureFromSurface(_parent->getRenderer(), surface);
    SDL_FreeSurface(surface);
    int x, y, w, h;
    TTF_SizeUTF8(_font->getObject(), _text.c_str(), &w,&h);
	x = _rect.x + _rect.w/2 - w/2;
	y = _rect.y + _rect.h/2 - h/2;
	_text_rect = {x, y, w, h};
}

SDL_Rect SGL_Button::getRect() {
    return _rect;
}

void SGL_Button::executeCallback() {
    if (!_disabled) {
        _callback();
    }
}

bool SGL_Button::isDisabled() {
    return _disabled;
}

bool SGL_Button::toggleDisable() {
    _disabled = !_disabled;
    return _disabled;
}

void SGL_Button::disable() {
    _disabled = true;
}

void SGL_Button::enable() {
    _disabled = false;
}

bool SGL_Button::isHittable() {
    return _hittable;
}