#pragma once
#include <vector>
#include <SDL2/SDL.h>
#include "../SGL_Builtins/SGL_Structs.hpp"
class SGL_Widget; // #include "../SGL_Widget/SGL_Widget.hpp"

class SGL_ParentType {
public:
    // constructor should be passed SDL_Renderer* and have it stored in _renderer
    // constructor should add `this` into _parent._children and into root parent children
    virtual void addWidget(SGL_Widget* widget);
    virtual void addChild(SGL_ParentType* child);
    virtual void addParent(SGL_ParentType* parent);
    virtual void draw();
    virtual SDL_Renderer* getRenderer();
    virtual std::vector<SGL_WidgetIdentifier> getWidgetRects();
    virtual void executeCallback(int id);
    virtual SGL_ParentType* getRootParent();
private:
    SGL_ParentType* _root_parent;
    SDL_Renderer* _renderer;
    std::vector<SGL_ParentType*> _all_parents;
    std::vector<SGL_ParentType*> _children;
    std::vector<SGL_Widget*> _widgets;
};