#include "../../include/managers/EventManager.hpp"


void EventManager::subscribe(const std::string& eventName, std::function<void()> listener){
    m_listeners[eventName].push_back(listener);
}

void EventManager::emit(const std::string& eventName){ 
    if (m_listeners.find(eventName) != m_listeners.end()) {
        for (auto& listener : m_listeners[eventName]) {
            listener();
        }
    }
}