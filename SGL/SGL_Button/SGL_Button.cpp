#include "SGL_Button.hpp"

SGL_Button::SGL_Button(SGL_Parent *parent, SDL_Rect rect, SDL_Color bg, std::string text, TTF_Font *font, SDL_Color fg, std::function<void()> callback) {
    _parent = parent;
    _parent->addWidget(this);
    _rect = rect;
    _bg = bg;
    _text = text;
    _font = font;
    _fg = fg;
    _callback = callback;
    _hittable = true;
    _calc_text();
}

void SGL_Button::draw(SDL_Renderer *renderer) {
    if (_bg.a != 0) {
        SDL_SetRenderDrawColor(renderer, _bg.r, _bg.g, _bg.b, _bg.a);
        SDL_RenderFillRect(renderer, &_rect);
    }
    if (_text != "") {
        SDL_RenderCopy(renderer, _text_texture, NULL, &_text_rect);
    }
}

void SGL_Button::_calc_text() {
    SDL_Surface* surface = TTF_RenderText_Blended(_font, _text.c_str(), _fg); 
	_text_texture = SDL_CreateTextureFromSurface(_parent->getRenderer(), surface);
    SDL_FreeSurface(surface);
    int w, h;
    TTF_SizeUTF8(_font, _text.c_str(), &w,&h);
	_text_rect.x = _rect.x + _rect.w/2 - w/2;
	_text_rect.y = _rect.y + _rect.h/2 - h/2;
	_text_rect.w = w;
	_text_rect.h = h;
}

SDL_Rect SGL_Button::getRect() {
    return _rect;
}

void SGL_Button::executeCallback() {
    _callback();
}