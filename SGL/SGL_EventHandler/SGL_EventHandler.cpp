#include "SGL_EventHandler.hpp"

// declared in ../SGL_Builtins/SGL_Funcs.cpp
bool SGL_Collision_RP(SDL_Rect rect, SDL_Point point);

SGL_EventHandler::SGL_EventHandler(SGL_Window* window, SGL_Root* _root_parent)
    : _window(window), _root_parent(_root_parent) {}

void SGL_EventHandler::handleEvents() {
    SDL_Event event;
    while (SDL_PollEvent(&event)) {
        if (event.type == SDL_QUIT) {
            _window->stop();
            break;
        }
        if (event.type == SDL_MOUSEBUTTONUP) {
            for (auto parent : _root_parent->getAllParents()) {
                for (auto identifier : parent->getWidgetRects()) {
                    if (SGL_Collision_RP(identifier.rect, {event.motion.x, event.motion.y})) {
                        parent->executeCallback(identifier.id);
                    }
                }
            }
        }
    }
}