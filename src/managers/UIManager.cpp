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

UIManager::~UIManager(){
    for(auto* element : m_elements){
        delete element;
    }
    m_elements.clear();
}