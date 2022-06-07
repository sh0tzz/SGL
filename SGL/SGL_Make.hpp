SDL_Rect SGL_MakeRect(int x, int y, int w, int h) {
    SDL_Rect rect = {.x = x, .y = y, .w = w, .h = h};
    return rect;
}

SDL_Color SGL_MakeColor(Uint8 r, Uint8 g, Uint8 b, Uint8 a) {
    SDL_Color color = {.r = r, .g = g, .b = b, .a = a};
    return color;
}