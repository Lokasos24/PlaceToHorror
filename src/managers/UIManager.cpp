#include "../../include/managers/UIManager.hpp"
#include <iostream>

void UIManager::addElement(UIElement* element) { 
    if(element) m_elements.push_back(element);
}

void UIManager::render(SDL_Renderer* renderer){
    for (auto* element : m_elements) {
        element->render(renderer);
    }
}

void UIManager::handleEvents(SDL_Event& e){
    if(e.type == SDL_MOUSEBUTTONDOWN){
        if(e.button.button == SDL_BUTTON_LEFT){
            int mx, my;
            SDL_GetMouseState(&mx, &my);

            for(auto* element : m_elements){
                if(element->isMouseOver(mx, my)){
                    UIButton* btn = dynamic_cast<UIButton*>(element);
                    if(btn){
                        btn->onClick();
                    }
                }
            }
        }
    }
}

UIManager::~UIManager(){
    for(auto* element : m_elements){
        delete element;
    }
    m_elements.clear();
}