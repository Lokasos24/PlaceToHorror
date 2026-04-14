#pragma once
#include <SDL.h>
#include <string>

class UIElement {
    public:
        UIElement(int x, int y, int w, int h) 
            : m_rect({x, y, w, h}), m_isActive(true) {}

        virtual ~UIElement() {}
        virtual void render(SDL_Renderer* renderer) = 0;
        
        bool isMouseOver(int mouseX, int mouseY);

    protected:
        SDL_Rect m_rect;
        bool m_isActive;
};