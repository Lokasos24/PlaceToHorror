#pragma once
#include <vector>
#include "../ecs/entities/Entity.hpp"
#include <SDL.h>

class EntityManager {
    public:
        ~EntityManager(); 

        void addEntity(Entity* entity);
        void update(float deltaTime);
        void render(SDL_Renderer* renderer);

        void clear();

    private:
        std::vector<Entity*> m_entities;
};