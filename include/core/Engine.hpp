#pragma once
#include "Window.hpp"
#include "Input.hpp"
#include "../managers/EntityManager.hpp"
#include <iostream>

enum class EngineState {
    EDIT,
    PAUSE,
    RUNNING
};

class Engine {
    public:
        Engine();
        ~Engine();

        void init();
        void run();
        void toggleState(EngineState newState);
        bool isRunning();

    private:
        bool m_isRunning = false;
        Window m_window;
        
        EngineState m_currentState = EngineState::EDIT;
        EntityManager m_entityManager;

        float m_deltaTime = 0.0f;
        Uint64 m_lastTime = 0;
};