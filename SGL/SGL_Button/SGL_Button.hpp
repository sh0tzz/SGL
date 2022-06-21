#pragma once
#include <SDL.h>
#include <SDL2/SDL_ttf.h>
#include <string>
#include <functional>
#include "../SGL_Widget/SGL_Widget.hpp"
#include "../SGL_Parent/SGL_Parent.hpp"

class SGL_Button : public SGL_Widget {
public:
    SGL_Button(SGL_Parent *parent, SDL_Rect rect, SDL_Color bg, std::string text, TTF_Font *font, SDL_Color fg, std::function<void()> callback);
    void draw(SDL_Renderer *renderer);
    SDL_Rect getRect();
    void executeCallback();
    bool isDisabled();
    bool toggleDisable();
    void disable();
    void enable();
    bool isHittable();
private:
    SGL_Parent *_parent;
    SDL_Rect _rect;
    SDL_Color _bg;
    std::string _text;
    TTF_Font *_font;
    SDL_Color _fg;
    std::function<void()> _callback;

    bool _hittable;
    bool _disabled;

    SDL_Texture *_text_texture;
    SDL_Rect _text_rect;

    void _calc_text();
};