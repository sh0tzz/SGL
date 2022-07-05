#include "SGL_Button.hpp"

SGL_Button::SGL_Button(SGL_ParentType* parent, std::string text, std::function<void()> callback, SDL_Rect rect, SDL_Color bg, SGL_Font* font, SDL_Color fg)
    : _parent(parent), _callback(callback), _rect(rect), _bg(bg), _font(font), _fg(fg) {
    _parent->addWidget(this);
    _hittable = true;
    _text = new SGL_Text(_parent->getRenderer(), _rect, _font->getObject(), text, _fg);
}

void SGL_Button::draw(SDL_Renderer* renderer) {
    if (_bg.a != 0) {
        SDL_SetRenderDrawColor(renderer, _bg.r, _bg.g, _bg.b, _bg.a);
        SDL_RenderFillRect(renderer, &_rect);
    }
    SDL_RenderCopy(renderer, _text->getTexture(), nullptr, _text->getRect());
}

SDL_Rect SGL_Button::getRect() {
    return _rect;
}

void SGL_Button::executeCallback() {
    if (!_disabled) {
        _callback();
    }
}

bool SGL_Button::isDisabled() {
    return _disabled;
}

bool SGL_Button::toggleDisable() {
    _disabled = !_disabled;
    return _disabled;
}

void SGL_Button::disable() {
    _disabled = true;
}

void SGL_Button::enable() {
    _disabled = false;
}

bool SGL_Button::isHittable() {
    return _hittable;
}