#pragma once
#include <SDL.h>
#include <iostream>
#include <map>

class Input{

    public:
        static Input& getInstance(){
            static Input instance;
            return instance;
        }

        void update();
        bool isKeyDown(SDL_Scancode key);

    private:
        Input() {}
        const Uint8* m_keyboardState = nullptr;

};
