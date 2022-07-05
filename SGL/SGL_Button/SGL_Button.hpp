#pragma once
#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include <string>
#include <functional>
#include "../SGL_Widget/SGL_Widget.hpp"
#include "../SGL_Root/SGL_Root.hpp"
#include "../SGL_Font/SGL_Font.hpp"
#include "../SGL_Text/SGL_Text.hpp"

class SGL_Button : public SGL_Widget {
public:
    SGL_Button(SGL_ParentType* parent, std::string text, std::function<void()> callback, SDL_Rect rect, SDL_Color bg, SGL_Font* font, SDL_Color fg);
    void draw(SDL_Renderer* renderer);
    SDL_Rect getRect();
    void executeCallback();
    bool isDisabled();
    bool toggleDisable();
    void disable();
    void enable();
    bool isHittable();
private:
    SGL_ParentType* _parent;
    SGL_Text* _text;
    std::function<void()> _callback;
    SDL_Rect _rect;
    SDL_Color _bg;
    SGL_Font* _font;
    SDL_Color _fg;

    bool _hittable;
    bool _disabled;
};