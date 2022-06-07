class SGL_Parent;

class SGL_Widget {
public:
    virtual void draw(SDL_Renderer *renderer);
private:
    SGL_Parent *_parent;
    SDL_Rect _rect;
    SDL_Color _color;
    std::string _text;
};