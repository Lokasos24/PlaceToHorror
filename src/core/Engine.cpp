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

    if(Input::getInstance().isKeyDown(SDL_SCANCODE_F5)) m_currentState = EngineState::RUNNING;
    if(Input::getInstance().isKeyDown(SDL_SCANCODE_F6)) m_currentState = EngineState::EDIT;
    if(Input::getInstance().isKeyDown(SDL_SCANCODE_P)) m_currentState = EngineState::PAUSE;

    if(Input::getInstance().isKeyDown(SDL_SCANCODE_ESCAPE)){
        m_isRunning = false;
    }

    if (m_currentState == EngineState::RUNNING) {
        m_entityManager.update(m_deltaTime);
    } 
    else if (m_currentState == EngineState::EDIT) {
        // Aquí se va a poner lógica de mover la cámara libremente
        // sin que el jugador se mueva por gravedad o IA.
    }

    m_window.prepare();
    m_entityManager.render(m_window.getRenderer());
    m_window.present();

    if (m_currentState != EngineState::RUNNING) {
        SDL_Delay(16);
    }
}

bool Engine::isRunning(){
    return m_isRunning;
}