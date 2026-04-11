#include "../../include/core/Window.hpp"
using namespace std;

bool Window::init(const char* title, int width, int height){
    if(SDL_Init(SDL_INIT_VIDEO) < 0){    
        cout<<"Error al iniciar SDL: " << SDL_GetError() << endl;
        return false;
    }

    m_window = SDL_CreateWindow(title, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, width, height, SDL_WINDOW_SHOWN);

    if(!m_window){
        cout<<"No se pudo crear la ventana: "<<SDL_GetError()<<endl;
        return false;
    }

    m_renderer = SDL_CreateRenderer(m_window, -1, SDL_RENDERER_ACCELERATED);

    if(!m_renderer){
        cout<<"Error al crear renderer: " << SDL_GetError() << endl;
        return false;
    }

    return true;
}

void Window::handleEvents(SDL_Event& event, bool& isRunning){
    if(event.type == SDL_QUIT){
        isRunning = false;
    }
}

void Window::prepare(){
    SDL_SetRenderDrawColor(m_renderer, 0, 0, 255, 255);
    SDL_RenderClear(m_renderer);
}

void Window::present(){
    SDL_RenderPresent(m_renderer);
}

void Window::clean(){
    SDL_DestroyRenderer(m_renderer);
    SDL_DestroyWindow(m_window);

    SDL_Quit();
}