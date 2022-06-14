#include "SGL_Parent.hpp"

SGL_Parent::SGL_Parent(SDL_Renderer *renderer) {
    _renderer = renderer;
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