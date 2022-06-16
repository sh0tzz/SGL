#include <SDL.h>

SDL_Rect SGL_Rect(int x, int y, int w, int h) {
    SDL_Rect rect = {.x = x, .y = y, .w = w, .h = h};
    return rect;
}

SDL_Color SGL_Color(Uint8 r, Uint8 g, Uint8 b, Uint8 a = 255) {
    SDL_Color color = {.r = r, .g = g, .b = b, .a = a};
    return color;
}

bool SGL_Collision_RP(SDL_Rect rect, int point_x, int point_y) {
    // SGL_Collision between Rect and Point
    if (point_x >= rect.x && point_x <= rect.x + rect.w) {
        if (point_y >= rect.y && point_y <= rect.y + rect.h) {
            return true;
        }
    }
    return false;
}