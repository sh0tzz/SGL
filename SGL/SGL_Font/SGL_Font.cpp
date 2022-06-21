#include "SGL_Font.hpp"

SGL_Font::SGL_Font(std::string ttf_path, int font_size, int style) {
    _font_object = TTF_OpenFont(ttf_path.c_str(), font_size);
    TTF_SetFontStyle(_font_object, style);
}

TTF_Font* SGL_Font::getObject() {
    return _font_object;
}