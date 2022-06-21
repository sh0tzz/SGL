#include "SGL_Clock.hpp"

SGL_Clock::SGL_Clock(int fps)
    : _fps(fps) {
    _last_tick = SDL_GetTicks();
}

void SGL_Clock::tick() {
    if (1000/_fps > SDL_GetTicks() - _last_tick) {
        SDL_Delay(1000/_fps - (SDL_GetTicks() - _last_tick));	
    }
    _last_tick = SDL_GetTicks();
}

int SGL_Clock::getFPS() {
    return _fps;
}

void SGL_Clock::setFPS(int fps) {
    _fps = fps;
}