#pragma once
#include <iostream>
#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>

#define SGL_NORMAL          0x00
#define SGL_BOLD            0x01
#define SGL_ITALIC          0x02
#define SGL_UNDERLINE       0x04
#define SGL_STRIKETHROUGH   0x08

class SGL_Font {
public:
    SGL_Font(std::string ttf_path, int font_size, int style);
    SDL_Color getColor();
    TTF_Font* getObject();
private:
    TTF_Font* _font_object;
};