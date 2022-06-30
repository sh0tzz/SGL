#pragma once
#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include <string>
#include "../SGL_Widget/SGL_Widget.hpp"
#include "../SGL_ParentType/SGL_ParentType.hpp"
#include "../SGL_Font/SGL_Font.hpp"
#include "../SGL_Window/SGL_Window.hpp"

class SGL_Label : public SGL_Widget {
public:
    SGL_Label(SGL_ParentType* parent, std::string text, SDL_Rect rect, SDL_Color bg, SGL_Font* font, SDL_Color fg);
    SGL_Label(SGL_Window* window, std::string text, SDL_Rect rect, SDL_Color bg, SGL_Font* font, SDL_Color fg);
    void draw(SDL_Renderer* renderer);
    SDL_Rect getRect();
    bool isHittable();
private:
    SGL_ParentType* _parent;
    std::string _text;
    SDL_Rect _rect;
    SDL_Color _bg;
    SGL_Font* _font;
    SDL_Color _fg;

    bool _hittable;

    SDL_Texture* _text_texture;
    SDL_Rect _text_rect;

    void _calc_text();
};