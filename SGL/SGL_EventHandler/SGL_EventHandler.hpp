#pragma once
#include "../SGL_Root/SGL_Root.hpp"
class SGL_Root;

class SGL_Window; // #include "../SGL_Window/SGL_Window.hpp"
class SGL_ParentType; // #include "../SGL_ParentType/SGL_ParentType.hpp"

class SGL_EventHandler {
public:
    SGL_EventHandler(SGL_Window* window, SGL_Root* root_parent);
    void handleEvents();
private:
    SGL_Window* _window;
    SGL_Root* _root_parent;
};