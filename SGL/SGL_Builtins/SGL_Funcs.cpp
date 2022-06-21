#include <SDL2/SDL.h>

/*
    referenced in ../SGL_EventHandler/SGL_EventHandler.cpp
*/
bool SGL_Collision_RP(SDL_Rect rect, SDL_Point point) {
    // SGL_Collision between Rect and Point
    if (point.x >= rect.x && point.x <= rect.x + rect.w) {
        if (point.y >= rect.y && point.y <= rect.y + rect.h) {
            return true;
        }
    }
    return false;
}