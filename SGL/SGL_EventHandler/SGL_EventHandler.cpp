#include "SGL_EventHandler.hpp"

SDL_Rect SGL_Rect(int x, int y, int w, int h);
bool SGL_Collision_RP(SDL_Rect rect, int point_x, int point_y);

SGL_EventHandler::SGL_EventHandler(SGL_Window* window) {
    _window = window;
    _parent = window->getParent();
}

void SGL_EventHandler::handleEvents() {
    SDL_Event event;
    SDL_Rect btnrect = SGL_Rect(10,200,200,50);
    while (SDL_PollEvent(&event)) {
        if (event.type == SDL_QUIT) {
            _window->stop();
            break;
        }
        if (event.type == SDL_MOUSEBUTTONUP) {
            for (auto rect : _parent->getWidgetRects()) {
                if (SGL_Collision_RP(rect, event.motion.x, event.motion.y)) {
                    SDL_Log("Widget %d %d %d %d hit", rect.x, rect.y, rect.w, rect.h);
                    break;
                }
            }
        }
    }
}