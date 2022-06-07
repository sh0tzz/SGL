SGL_Label::SGL_Label(SGL_Parent *parent, SDL_Rect rect, std::string text, SDL_Color color = SGL_DEFUALT_WIDGETBG) {
    _parent = parent;
    _parent->addWidget(this);
    _rect = rect;
    _text = text;
    _color = color;
}

void SGL_Label::draw(SDL_Renderer *renderer) {
    //SDL_SetRenderDrawColor(renderer, _color.r, _color.g, _color.b, _color.a);
    SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
    SDL_RenderFillRect(renderer, &_rect);
}