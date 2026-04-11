#pragma once
#include <SDL.h>
#include <iostream>

using namespace std;

class Window{
    public:
        Window() : m_window(nullptr) {}
        ~Window() { clean(); }
        
        //Iniciar la variable
        bool init(const char* title, int width, int height);

        //Limpiar la ventana abierta
        void clean();

        //Evento de pantallas
        void handleEvents(SDL_Event& event, bool& isRunning);

        void prepare(); //Preparar la ventana con colores
        void present(); //Mostrar la ventana pintada

        SDL_Renderer* getRenderer() const { return m_renderer; };

    private:
        SDL_Window* m_window;
        SDL_Renderer* m_renderer;
};