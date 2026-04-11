#pragma once
#include <iostream>
#include <functional>
#include "../UIElement.hpp"

class UIButton : public UIElement {
    public:
        UIButton(int x, int y, int w, int h, std::function<void()> onClickCallBack);

        void render(SDL_Renderer* renderer) override;
        void onClick();

    private:
        std::function<void()> m_onClick;
};