#pragma once
#include "../UIElement.hpp"

class UIButton : public UIElement {
    public:
        UIButton(int x, int y, int w, int h) : UIElement(x, y, w, h) {}

        void render(SDL_Renderer* renderer) override {
            int mx, my;
            SDL_GetMouseState(&mx, &my);

            if (isMouseOver(mx, my)) {
                SDL_SetRenderDrawColor(renderer, 200, 200, 200, 255);
            } else {
                SDL_SetRenderDrawColor(renderer, 100, 100, 100, 255);
            }

            SDL_RenderFillRect(renderer, &m_rect);
            
            SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
            SDL_RenderDrawRect(renderer, &m_rect);
        }
};