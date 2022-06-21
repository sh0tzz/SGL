#include <SDL.h>

bool SGL_Collision_RP(SDL_Rect rect, int point_x, int point_y) {
    // SGL_Collision between Rect and Point
    if (point_x >= rect.x && point_x <= rect.x + rect.w) {
        if (point_y >= rect.y && point_y <= rect.y + rect.h) {
            return true;
        }
    }
    return false;
}