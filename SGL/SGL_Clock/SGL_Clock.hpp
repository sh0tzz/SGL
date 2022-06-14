#pragma once
#include <SDL.h>

class SGL_Clock {
public:
    SGL_Clock(int fps);
    void tick();
    int getFPS();
    void setFPS(int fps);
private:
    int _fps;
    Uint32 _last_tick;
};