#pragma once
#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include <string>
#include <functional>
#include "../SGL_Widget/SGL_Widget.hpp"
#include "../SGL_Parent/SGL_Parent.hpp"
#include "../SGL_Font/SGL_Font.hpp"

class SGL_Button : public SGL_Widget {
public:
    SGL_Button(SGL_Parent* parent, std::string text, std::function<void()> callback, SDL_Rect rect, SDL_Color bg, SGL_Font* font, SDL_Color fg);
    void draw(SDL_Renderer* renderer);
    SDL_Rect getRect();
    void executeCallback();
    bool isDisabled();
    bool toggleDisable();
    void disable();
    void enable();
    bool isHittable();
private:
    SGL_Parent* _parent;
    std::string _text;
    std::function<void()> _callback;
    SDL_Rect _rect;
    SDL_Color _bg;
    SGL_Font* _font;
    SDL_Color _fg;

    bool _hittable;
    bool _disabled;

    SDL_Texture* _text_texture;
    SDL_Rect _text_rect;

    void _calc_text();
};