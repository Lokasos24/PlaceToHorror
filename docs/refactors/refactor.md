# Documentacion de refactorizaciones.

## Optimizacion de botones || 13/04/2026 || 10:41.

### Problema:
* Vi que en los botones se usaba *class*, esta generalment es costosa por que se usa para dar "vida" a un "objeto" y en mi caso es solo para UI.

### La solucion:
* El codigo en vez de usar *class* se puede usar *struct* que es mas "ligero" por la orientacion a "datos".

**Codigo anterior**
```cpp
class UIButton : public UIElement {
    public:
        UIButton(int x, int y, int w, int h, std::function<void()> onClickCallBack);

        void render(SDL_Renderer* renderer) override;
        void onClick();

    private:
        std::function<void()> m_onClick;
};

enum ButtonEvent{NONE, BTN_PLAY, BTN_EXIT, BTN_OPTIONS};
struct UIButton{
    SDL_Rect rect;
    ButtonEvent eventID;
    bool isHovered;
}