#pragma once
#include "Window.hpp"
#include "Input.hpp"
#include "../managers/EntityManager.hpp"
#include <iostream>

class Engine {
    public:
        Engine();
        ~Engine();

        void init();
        void run();

        bool isRunning();

    private:
        bool m_isRunning = false;
        Window m_window;
        
        EntityManager m_entityManager;

        float m_deltaTime = 0.0f;
        Uint64 m_lastTime = 0;
};