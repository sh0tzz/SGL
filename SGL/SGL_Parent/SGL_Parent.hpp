class SGL_Parent {
public:
    SGL_Parent(SDL_Renderer *renderer);
    void addWidget(SGL_Widget *widget);
    void draw();
private:
    SDL_Renderer *_renderer;
    std::vector<SGL_Widget*> widgets;
    int widgetCount;
};