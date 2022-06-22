#include "SGL_Window.hpp"

SGL_Window::SGL_Window(std::string title, int width, int height, SDL_Color bg) 
    : _bg(bg) {
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
    _parent = new SGL_Parent(_renderer);
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

void SGL_Window::mainloop() {
    SGL_Clock clock = SGL_Clock(60);
	SGL_EventHandler ehan = SGL_EventHandler(this, _parent);
	while (_running) {
		ehan.handleEvents();
		
		SDL_SetRenderDrawColor(_renderer, _bg.r, _bg.g, _bg.b, _bg.a);
		SDL_RenderClear(_renderer);
		_parent->draw();
		SDL_RenderPresent(_renderer);
		
		clock.tick();
	}
}