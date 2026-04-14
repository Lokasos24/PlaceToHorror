#pragma once
#include "Window.hpp"
#include "Input.hpp"
#include "../managers/EntityManager.hpp"
#include "../managers/UIManager.hpp"
#include "../managers/EventManager.hpp"
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
        int getWidth();
        int getHeight();
        bool isRunning();

    private:
        int m_width;
        int m_height;
        bool m_isRunning = false;
        Window m_window;
        
        EngineState m_currentState = EngineState::EDIT;
        EntityManager m_entityManager;
        UIManager m_uimanager;

        float m_deltaTime = 0.0f;
        Uint64 m_lastTime = 0;
};