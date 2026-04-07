#include "../../include/core/Engine.hpp"
#include <vector>
#include <iostream>

using namespace std;

Engine::Engine(){
    m_lastTime = SDL_GetPerformanceCounter();
}

Engine::~Engine(){}

void Engine::init(){
    m_window.init("PlaceToHorror", 800, 600);
    m_isRunning = true;
}

void Engine::run(){
    Uint64 currentTime = SDL_GetPerformanceCounter();
    m_deltaTime = (float)(currentTime - m_lastTime) / (float)SDL_GetPerformanceFrequency();
    m_lastTime = currentTime;

    m_window.pollEvents(m_isRunning);
    Input::getInstance().update();

    if(Input::getInstance().isKeyDown(SDL_SCANCODE_ESCAPE)){
        m_isRunning = false;
    }

    m_window.prepare();
    m_entityManager.render(m_window.getRenderer());
    m_window.present();
}

bool Engine::isRunning(){
    return m_isRunning;
}