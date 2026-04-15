#pragma once
#include <vector>
#include "../ui/UIElement.hpp"
#include "../ui/components/UIButton.hpp"

class UIManager {
    public:
        void addElement(UIElement* element);
        
        void render(SDL_Renderer* renderer);

        void handleEvents(SDL_Event& e);
        void onResize(int newW, int newH);
        ~UIManager();

    private:
        std::vector<UIElement*> m_elements;
};