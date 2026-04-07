#include "../../include/core/Engine.hpp"
#include <iostream>

using namespace std;

Engine::Engine() 
    : m_isRunning(false),
      m_player(100.0f, 100.0f),
      m_lastTime(0),
      m_deltaTime(0.0f)
{
    m_lastTime = SDL_GetPerformanceCounter();
}

Engine::~Engine(){}

void Engine::init(){
    m_window.init("PlaceToHorror", 800, 600);
    m_isRunning = true;
}

void Engine::run(){
    Uint32 currentTime = SDL_GetPerformanceCounter();
    m_deltaTime = (float)(currentTime - m_lastTime) / (float)SDL_GetPerformanceFrequency();
    m_lastTime = currentTime;

    m_window.pollEvents(m_isRunning);
    Input::getInstance().update();

    if(Input::getInstance().isKeyDown(SDL_SCANCODE_ESCAPE)){
        m_isRunning = false;
    }

    // miJugador.update(m_deltaTime);

    m_window.prepare();
    // miJugador.render();
    m_window.present();
}

bool Engine::isRunning(){
    return m_isRunning;
}