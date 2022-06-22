#pragma once
#include <SDL2/SDL.h>
#include <vector>
#include "../SGL_Widget/SGL_Widget.hpp"
#include "../SGL_Window/SGL_Window.hpp"
#include "../SGL_Builtins/SGL_Structs.hpp"
class SGL_Widget;
class SGL_Window;

class SGL_Parent {
public:
    SGL_Parent(SDL_Renderer* renderer);
    void addWidget(SGL_Widget* widget);
    void draw();
    SDL_Renderer* getRenderer();
    std::vector<SGL_WidgetIdentifier> getWidgetRects();
    void executeCallback(int id);
private:
    SGL_Window* _window;
    SDL_Renderer* _renderer;
    std::vector<SGL_Widget*> widgets;
    int widgetCount;
};