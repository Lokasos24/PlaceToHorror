#include "../../../include/ui/components/UIButton.hpp"

using namespace std;

void UIButton::render(SDL_Renderer* renderer){
    int mx, my;
    SDL_GetMouseState(&mx, &my);

    if (isMouseOver(mx, my)) {
        SDL_SetRenderDrawColor(renderer, 200, 200, 200, 255);
    } else {
        SDL_SetRenderDrawColor(renderer, 100, 100, 100, 255);
    }

    SDL_RenderFillRectF(renderer, &m_rect);
    
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
    SDL_RenderDrawRectF(renderer, &m_rect);
};

void UIButton::calculatePosition(int windowW, int windowH){
    switch (m_config.anchor) {
        case UIAnchor::TOP_LEFT:
            m_rect.x = m_config.offsetx;
            m_rect.y = m_config.offsety;
            break;
        case UIAnchor::TOP_RIGHT:
            m_rect.x = (float)windowW - m_config.w - m_config.offsetx;
            m_rect.y = m_config.offsety;
            break;
        case UIAnchor::CENTER:
            m_rect.x = ((float)windowW / 2.0f) - (m_config.w / 2.0f) + m_config.offsetx;
            m_rect.y = ((float)windowH / 2.0f) - (m_config.h / 2.0f) + m_config.offsety;
            break;
        case UIAnchor::BOTTOM_LEFT:
            m_rect.x = m_config.offsetx;
            m_rect.y = (float)windowH - m_config.h - m_config.offsety;;
            break;
        case UIAnchor::BOTTOM_RIGHT:
            m_rect.x = (float)windowW - m_config.w - m_config.offsetx;
            m_rect.y = (float)windowH - m_config.h - m_config.offsety;
            break;
    }
}

void UIButton::onClick(){
    if(m_onClick){
        m_onClick();
    }
}