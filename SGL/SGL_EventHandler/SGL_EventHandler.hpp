#pragma once
#include "../SGL_Window/SGL_Window.hpp"

class SGL_EventHandler {
public:
    SGL_EventHandler(SGL_Window* window);
    void handleEvents();
private:
    SGL_Window* _window;
    SGL_Parent* _parent;
};