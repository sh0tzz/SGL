#include "SGL_Window.hpp"

SGL_Window::SGL_Window(std::string title, int width, int height) {
    _window = SDL_CreateWindow(
        title.c_str(),
        SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
        width, height,
        SDL_WINDOW_RESIZABLE
    );
    _renderer = SDL_CreateRenderer(
        _window, -1,
        SDL_RENDERER_ACCELERATED | SDL_RENDERER_TARGETTEXTURE
    );
    SDL_SetRenderDrawBlendMode(_renderer, SDL_BLENDMODE_BLEND);
    _running = true;
}

SDL_Renderer* SGL_Window::getRenderer() {
    return _renderer;
}

void SGL_Window::destroy() {
    SDL_DestroyWindow(_window);
}

bool SGL_Window::isRunning() {
    return _running;
}

void SGL_Window::stop() {
    _running = false;
}