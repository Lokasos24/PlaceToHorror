#include "../../include/managers/EntityManager.hpp"
#include "../../include/managers/ErrorManager.hpp"

EntityManager::~EntityManager() {
    clear();
}

void EntityManager::addEntity(Entity* entity) {
    m_entities.push_back(entity);
}

void EntityManager::update(float deltaTime) {
    for (Entity* entity : m_entities) {
        ASSERT(!(entity), "Entidad perdida con null");
        entity->update(deltaTime);
    }
}

void EntityManager::render(SDL_Renderer* renderer) {
    for (Entity* entity : m_entities) {
        ASSERT(!(entity), "Entidad perdida con null");
        entity->render(renderer);
    }
}

void EntityManager::clear() {
    for (Entity* entity : m_entities) {
        delete entity;
    }
    m_entities.clear();
}