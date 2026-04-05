#pragma once
#include "Window.hpp"
#include "Input.hpp"
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
};