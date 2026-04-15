#pragma once
#include <vector>
#include "../ui/UIElement.hpp"
#include "../ui/components/UIButton.hpp"

class UIManager {
    public:
        void addElement(UIElement* element);
        
        void render(SDL_Renderer* renderer);

        // Aquí se gestionaran los clics más adelante
        void handleEvents(SDL_Event& e);
        ~UIManager();

    private:
        std::vector<UIElement*> m_elements;
};