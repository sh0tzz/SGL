#pragma once
#include <SDL.h>
#include <SDL2/SDL_ttf.h>
#include <string>
#include "../SGL_Widget/SGL_Widget.hpp"
#include "../SGL_Parent/SGL_Parent.hpp"

class SGL_Label : public SGL_Widget {
public:
    SGL_Label(SGL_Parent *parent, SDL_Rect rect, SDL_Color bg, std::string text, TTF_Font *font, SDL_Color fg);
    void draw(SDL_Renderer *renderer);
    SDL_Rect getRect();
private:
    SGL_Parent *_parent;
    SDL_Rect _rect;
    SDL_Color _bg;
    std::string _text;
    TTF_Font *_font;
    SDL_Color _fg;

    SDL_Texture *_text_texture;
    SDL_Rect _text_rect;

    void _calc_text();
};