void SGL_Widget::draw(SDL_Renderer *renderer) {
    SDL_SetRenderDrawColor(renderer, _color.r, _color.g, _color.b, _color.a);
    SDL_RenderFillRect(renderer, &_rect);
}