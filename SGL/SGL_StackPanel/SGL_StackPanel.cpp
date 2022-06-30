#include "SGL_StackPanel.hpp"

SGL_StackPanel::SGL_StackPanel(SGL_ParentType* parent)
    : _parent(parent) {
    _renderer = _parent->getRenderer();
    _root_parent = _parent->getRootParent();
    _widgets = {};
    _children = {};
    _parent->addChild(this);
    _root_parent->addParent(this);
}

SGL_StackPanel::SGL_StackPanel(SGL_Window* window) {
    _parent = window->getRootParent();
    _renderer = _parent->getRenderer();
    _root_parent = _parent->getRootParent();
    _widgets = {};
    _children = {};
    _parent->addChild(this);
    _root_parent->addParent(this);
}

void SGL_StackPanel::addWidget(SGL_Widget* widget) {
    _widgets.push_back(widget);
}

void SGL_StackPanel::addChild(SGL_ParentType* child) {
    _children.push_back(child);
}

void SGL_StackPanel::draw() {
    for (int i = 0; i < _widgets.size(); i++) {
        _widgets[i]->draw(_renderer);
    }
    for (int i = 0; i < _children.size(); i++) {
        _children[i]->draw();
    }
}

SDL_Renderer* SGL_StackPanel::getRenderer() {
    return _renderer;
}

std::vector<SGL_WidgetIdentifier> SGL_StackPanel::getWidgetRects() {
    std::vector<SGL_WidgetIdentifier> rects = {};
    for (int i = 0; i < _widgets.size(); i++) {
        if (_widgets[i]->isHittable()) {
            rects.push_back({i, _widgets[i]->getRect()});
        }
    }
    return rects;
}

void SGL_StackPanel::executeCallback(int id) {
    _widgets[id]->executeCallback();
}

SGL_ParentType* SGL_StackPanel::getRootParent() {
    return _root_parent;
}