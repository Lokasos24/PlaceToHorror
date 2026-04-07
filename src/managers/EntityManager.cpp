#include "../../include/managers/EntityManager.hpp"

EntityManager::~EntityManager() {
    clear();
}

void EntityManager::addEntity(Entity* entity) {
    m_entities.push_back(entity);
}

void EntityManager::update(float deltaTime) {
    for (Entity* entity : m_entities) {
        entity->update(deltaTime);
    }
}

void EntityManager::render(SDL_Renderer* renderer) {
    for (Entity* entity : m_entities) {
        entity->render(renderer);
    }
}

void EntityManager::clear() {
    for (Entity* entity : m_entities) {
        delete entity;
    }
    m_entities.clear();
}