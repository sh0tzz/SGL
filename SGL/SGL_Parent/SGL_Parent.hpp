#pragma once
#include <SDL.h>
#include <vector>
#include "../SGL_Widget/SGL_Widget.hpp"
class SGL_Widget;

class SGL_Parent {
public:
    SGL_Parent(SDL_Renderer *renderer);
    void addWidget(SGL_Widget *widget);
    void draw();
    SDL_Renderer* getRenderer();
private:
    SDL_Renderer *_renderer;
    std::vector<SGL_Widget*> widgets;
    int widgetCount;
};