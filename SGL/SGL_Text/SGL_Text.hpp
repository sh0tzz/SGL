#pragma once
#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include <string>

class SGL_Text {
public:
    SGL_Text(SDL_Renderer *renderer, SDL_Rect widget_rect, TTF_Font *font, std::string text, SDL_Color color);
    void remake_text(SDL_Renderer *renderer, SDL_Rect widget_rect, TTF_Font *font, SDL_Color color);
    SDL_Texture* getTexture();
    SDL_Rect* getRect();
    std::string getText();
private:
    std::string _text;
    SDL_Renderer *_renderer;
    SDL_Texture *_texture;
    SDL_Rect _rect;
};