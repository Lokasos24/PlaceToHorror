#pragma once
#include <SDL.h>
#include <string>

class UIElement {
    public:
        UIElement(int x, int y, int w, int h) 
            : m_rect({x, y, w, h}), m_isActive(true) {}

        virtual ~UIElement() {}
        virtual void render(SDL_Renderer* renderer) = 0;
        
        bool isMouseOver(int mouseX, int mouseY) {
            return (mouseX >= m_rect.x && mouseX <= m_rect.x + m_rect.w &&
                    mouseY >= m_rect.y && mouseY <= m_rect.y + m_rect.h);
        }

    protected:
        SDL_Rect m_rect;
        bool m_isActive;
};