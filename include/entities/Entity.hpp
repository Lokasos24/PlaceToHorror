#pragma once
#include "../components/Transform.hpp"

class Entity{

    public:
        Entity() {}
        virtual ~Entity() {}

        virtual void update(float deltaTime) = 0;
        virtual void render() = 0;

    protected:
        Transform m_transform;
};