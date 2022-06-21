#include "SGL_Widget.hpp"

void SGL_Widget::draw(SDL_Renderer *renderer) {}

SDL_Rect SGL_Widget::getRect() {
    return _rect;
}

bool SGL_Widget::isHittable() {
    return _hittable;
}

void SGL_Widget::setHittable(bool hittable) {
    _hittable = hittable;
}