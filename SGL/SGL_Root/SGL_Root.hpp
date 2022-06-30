#pragma once
#include <SDL2/SDL.h>
#include <vector>
#include "../SGL_Widget/SGL_Widget.hpp"
#include "../SGL_Window/SGL_Window.hpp"
#include "../SGL_Builtins/SGL_Structs.hpp"
#include "../SGL_ParentType/SGL_ParentType.hpp"

class SGL_Root : public SGL_ParentType {
public:
    SGL_Root(SDL_Renderer* renderer);
    void addWidget(SGL_Widget* widget);
    void addChild(SGL_ParentType* child);
    void addParent(SGL_ParentType* parent);
    void draw();
    SDL_Renderer* getRenderer();
    std::vector<SGL_ParentType*> getAllParents();
    std::vector<SGL_WidgetIdentifier> getWidgetRects();
    void executeCallback(int id);
    SGL_Root* getRootParent();
private:
    SDL_Renderer* _renderer;
    SGL_Root* _root_parent = this;
    std::vector<SGL_ParentType*> _all_parents;
    std::vector<SGL_ParentType*> _children;
    std::vector<SGL_Widget*> _widgets;
};