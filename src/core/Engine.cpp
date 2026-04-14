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

    EventManager::getInstance().subscribe("EXIT_GAME", [this]() {
        this->m_isRunning = false; 
    });
    ButtonConfig quitConfig;
    quitConfig.x = 10;
    quitConfig.y = 10;
    quitConfig.w = 120;
    quitConfig.h = 40;
    quitConfig.callback = []() {
        EventManager::getInstance().emit("EXIT_GAME");
    };
    m_uimanager.addElement(new UIButton(quitConfig));

    m_isRunning = true;
}

void Engine::run(){
    Uint64 currentTime = SDL_GetPerformanceCounter();
    m_deltaTime = (float)(currentTime - m_lastTime) / (float)SDL_GetPerformanceFrequency();
    m_lastTime = currentTime;

    Input::getInstance().update();

    SDL_Event event;
    while(SDL_PollEvent(&event)){
        m_window.handleEvents(event, m_isRunning);
        m_uimanager.handleEvents(event);

        if(Input::getInstance().isKeyDown(SDL_SCANCODE_F5)) m_currentState = EngineState::RUNNING;
        if(Input::getInstance().isKeyDown(SDL_SCANCODE_F6)) m_currentState = EngineState::EDIT;
        if(Input::getInstance().isKeyDown(SDL_SCANCODE_P)) m_currentState = EngineState::PAUSE;

        if (m_currentState == EngineState::RUNNING) {
            m_entityManager.update(m_deltaTime);
        } 
        else if (m_currentState == EngineState::EDIT) {
            // Aquí se va a poner lógica de mover la cámara libremente
            // sin que el jugador se mueva por gravedad o IA.
        }

        if(Input::getInstance().isKeyDown(SDL_SCANCODE_ESCAPE)){
            m_isRunning = false;
        }
    }

    Input::getInstance().update();
    m_window.prepare();
    m_entityManager.render(m_window.getRenderer());
    m_uimanager.render(m_window.getRenderer());
    m_window.present();

    if (m_currentState != EngineState::RUNNING) {
        SDL_Delay(16);
    }
}

int Engine::getHeight(){
    return m_height;
}

int Engine::getWidth(){
    return m_width;
}

bool Engine::isRunning(){
    return m_isRunning;
}