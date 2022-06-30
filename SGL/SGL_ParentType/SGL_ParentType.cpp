#include "SGL_ParentType.hpp"

void SGL_ParentType::addWidget(SGL_Widget* widget) {
    _widgets.push_back(widget);
}

void SGL_ParentType::addChild(SGL_ParentType* child) {
    _children.push_back(child);
}

void SGL_ParentType::addParent(SGL_ParentType* parent) {
    _all_parents.push_back(parent);
}

void SGL_ParentType::draw() {
}

SDL_Renderer* SGL_ParentType::getRenderer() {
    return _renderer;
}

std::vector<SGL_WidgetIdentifier> SGL_ParentType::getWidgetRects() {
    return std::vector<SGL_WidgetIdentifier>();
}

void SGL_ParentType::executeCallback(int id) {
}

SGL_ParentType* SGL_ParentType::getRootParent() {
    return _root_parent;
}