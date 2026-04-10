#pragma once
#include "Entity.hpp"
#include "../../core/Input.hpp"
#include <iostream>

class Player : public Entity{
    public:
        Player(float x, float y) : Entity() {
            m_transform.x = x;
            m_transform.y = y;
        }

        void update(float deltaTime) override;
        void render(SDL_Renderer* renderer) override;

    private:
        float m_speed = 200.0f;
};