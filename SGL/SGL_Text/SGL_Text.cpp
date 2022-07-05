#include "SGL_Text.hpp"

SGL_Text::SGL_Text(SDL_Renderer *renderer, SDL_Rect bounds, TTF_Font *font, std::string text, SDL_Color color) 
    : _text(text){
    remake_text(renderer, bounds, font, color);
}

void SGL_Text::remake_text(SDL_Renderer *renderer, SDL_Rect bounds, TTF_Font *font, SDL_Color color) {
    SDL_Surface *surface = TTF_RenderText_Blended(font, _text.c_str(), color);
	_texture = SDL_CreateTextureFromSurface(renderer, surface);
    SDL_FreeSurface(surface);
    int x, y, w, h;
    TTF_SizeUTF8(font, _text.c_str(), &w,&h);
	x = bounds.x + bounds.w/2 - w/2;
	y = bounds.y + bounds.h/2 - h/2;
    _rect = {x, y, w, h};
}

SDL_Texture* SGL_Text::getTexture() {
    return _texture;
}

SDL_Rect* SGL_Text::getRect() {
    return &_rect;
}

std::string SGL_Text::getText() {
    return _text;
}
