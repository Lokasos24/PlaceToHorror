#pragma once
#include <iostream>
#include <functional>
#include "../UIElement.hpp"
#include "../UIStructs.hpp"

class UIButton : public UIElement {
    public:
        UIButton(const ButtonConfig& config)
         : UIElement(config.x, config.y, config.w, config.h), 
         m_onClick(config.callback) {}

        void render(SDL_Renderer* renderer) override;
        void onClick();

    private:
        std::function<void()> m_onClick;
};