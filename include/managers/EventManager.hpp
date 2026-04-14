#pragma once
#include <map>
#include <vector>
#include <string>
#include <functional>

class EventManager {
    public:
        static EventManager& getInstance() {
            static EventManager instance;
            return instance;
        }

        void subscribe(const std::string& eventName, std::function<void()> listener);

        void emit(const std::string& eventName);

    private:
        EventManager() {}
        std::map<std::string, std::vector<std::function<void()>>> m_listeners;
};