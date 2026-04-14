#include "../../../include/ui/components/Button.hpp"

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

void UIButton::onClick(){
    if(m_onClick){
        m_onClick();
    }
}