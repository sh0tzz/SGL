#pragma once
#include "../SGL_Window/SGL_Window.hpp"
#include "../SGL_Parent/SGL_Parent.hpp"
class SGL_Window;
class SGL_Parent;

class SGL_EventHandler {
public:
    SGL_EventHandler(SGL_Window* window, SGL_Parent* parent);
    void handleEvents();
private:
    SGL_Window* _window;
    SGL_Parent* _parent;
};