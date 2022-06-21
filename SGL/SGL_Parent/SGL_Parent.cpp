#include "SGL_Parent.hpp"

SGL_Parent::SGL_Parent(SGL_Window* window) {
    _window = window;
    _renderer = _window->getRenderer();
    widgets = {};
    widgetCount = 0;
}

void SGL_Parent::addWidget(SGL_Widget *widget) {
    widgets.push_back(widget);
    widgetCount++;
}

void SGL_Parent::draw() {
    for (int i = 0; i < widgetCount; i++) {
        widgets[i]->draw(_renderer);
    }
}

SDL_Renderer* SGL_Parent::getRenderer() {
    return _renderer;
}

std::vector<SDL_Rect> SGL_Parent::getWidgetRects() {
    std::vector<SDL_Rect> rects = {};
    for (int i = 0; i < widgetCount; i++) {
        if (widgets[i]->isHittable()) {
            rects.push_back(widgets[i]->getRect());
        }
    }
    return rects;
}