#include "SGL_Root.hpp"

SGL_Root::SGL_Root(SDL_Renderer* renderer)
    : _renderer(renderer) {
    _widgets = {};
    _children = {};
    _all_parents = {this};
}

void SGL_Root::addWidget(SGL_Widget* widget) {
    _widgets.push_back(widget);
}

void SGL_Root::addChild(SGL_ParentType* child) {
    _children.push_back(child);
}

void SGL_Root::addParent(SGL_ParentType* parent) {
    _all_parents.push_back(parent);
}

void SGL_Root::draw() {
    for (int i = 0; i < _widgets.size(); i++) {
        _widgets[i]->draw(_renderer);
    }
    for (int i = 0; i < _children.size(); i++) {
        _children[i]->draw();
    }
}

SDL_Renderer* SGL_Root::getRenderer() {
    return _renderer;
}

std::vector<SGL_ParentType*> SGL_Root::getAllParents() {
    return _all_parents;
}

std::vector<SGL_WidgetIdentifier> SGL_Root::getWidgetRects() {
    std::vector<SGL_WidgetIdentifier> rects = {};
    for (int i = 0; i < _widgets.size(); i++) {
        if (_widgets[i]->isHittable()) {
            rects.push_back({i, _widgets[i]->getRect()});
        }
    }
    return rects;
}

void SGL_Root::executeCallback(int id) {
    _widgets[id]->executeCallback();
}

SGL_Root* SGL_Root::getRootParent() {
    return this;
}