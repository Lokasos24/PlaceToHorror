#pragma once
#include "../components/Transform.hpp"

struct SDL_Renderer;

class Entity{

    public:
        Entity() {}
        virtual ~Entity() {}

        virtual void update(float deltaTime) = 0;
        virtual void render(SDL_Renderer* renderer) = 0;

    protected:
        Transform m_transform;
};