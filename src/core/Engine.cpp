#include "../../include/core/Engine.hpp"
#include <iostream>

using namespace std;

Engine::Engine(){}

Engine::~Engine(){}

void Engine::init(){
    m_window.init("PlaceToHorror", 800, 600);
    m_isRunning = true;
}

void Engine::run(){
    m_window.pollEvents(m_isRunning);

    Input::getInstance().update();

    if(Input::getInstance().isKeyDown(SDL_SCANCODE_ESCAPE)){
        m_isRunning = false;
    }

    m_window.prepare();

    m_window.present();
}

bool Engine::isRunning(){
    return m_isRunning;
}