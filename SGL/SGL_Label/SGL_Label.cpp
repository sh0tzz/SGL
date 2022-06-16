#include "SGL_Label.hpp"

SGL_Label::SGL_Label(SGL_Parent *parent, SDL_Rect rect, SDL_Color bg, std::string text, TTF_Font *font, SDL_Color fg) {
    _parent = parent;
    _parent->addWidget(this);
    _rect = rect;
    _bg = bg;
    _text = text;
    _font = font;
    _fg = fg;
    _calc_text();
}

void SGL_Label::draw(SDL_Renderer *renderer) {
    if (_bg.a != 0) {
        SDL_SetRenderDrawColor(renderer, _bg.r, _bg.g, _bg.b, _bg.a);
        SDL_RenderFillRect(renderer, &_rect);
    }
    if (_text != "") {
        SDL_RenderCopy(renderer, _text_texture, NULL, &_text_rect);
    }
}

void SGL_Label::_calc_text() {
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