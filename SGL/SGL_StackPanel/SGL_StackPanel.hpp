#pragma once
#include <SDL2/SDL.h>
#include <vector>
#include "../SGL_Widget/SGL_Widget.hpp"
#include "../SGL_Window/SGL_Window.hpp"
#include "../SGL_Builtins/SGL_Structs.hpp"
#include "../SGL_ParentType/SGL_ParentType.hpp"

class SGL_StackPanel : public SGL_ParentType {
public:
    SGL_StackPanel(SGL_ParentType* parent);
    SGL_StackPanel(SGL_Window* window);
    void addWidget(SGL_Widget* widget);
    void addChild(SGL_ParentType* child);
    void draw();
    SDL_Renderer* getRenderer();
    std::vector<SGL_WidgetIdentifier> getWidgetRects();
    void executeCallback(int id);
    SGL_ParentType* getRootParent();
private:
    SGL_ParentType* _root_parent;
    SGL_ParentType* _parent;
    SDL_Renderer* _renderer;
    std::vector<SGL_ParentType*> _children;
    std::vector<SGL_Widget*> _widgets;
};