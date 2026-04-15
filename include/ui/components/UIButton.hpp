#pragma once
#include <iostream>
#include <functional>
#include "../UIElement.hpp"
#include "../UIStructs.hpp"

class UIButton : public UIElement {
    public:
        UIButton(const ButtonConfig& config)
         : UIElement(config.offsetx, config.offsety, config.w, config.h),
         m_config(config),
         m_onClick(config.callback) {}

        void render(SDL_Renderer* renderer) override;
        void onClick();
        void calculatePosition(int windowW, int windowH);

    private:
        ButtonConfig m_config;
        std::function<void()> m_onClick;
};