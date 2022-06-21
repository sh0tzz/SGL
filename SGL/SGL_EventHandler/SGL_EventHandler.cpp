#include "SGL_EventHandler.hpp"
#include "../SGL_Parent/SGL_Parent.hpp"

bool SGL_Collision_RP(SDL_Rect rect, int point_x, int point_y);

SGL_EventHandler::SGL_EventHandler(SGL_Window* window) {
    _window = window;
    _parent = window->getParent();
}

void SGL_EventHandler::handleEvents() {
    SDL_Event event;
    while (SDL_PollEvent(&event)) {
        if (event.type == SDL_QUIT) {
            _window->stop();
            break;
        }
        if (event.type == SDL_MOUSEBUTTONUP) {
            for (auto identifier : _parent->getWidgetRects()) {
                if (SGL_Collision_RP(identifier.rect, event.motion.x, event.motion.y)) {
                    _parent->executeCallback(identifier.id);
                }
            }
        }
    }
}