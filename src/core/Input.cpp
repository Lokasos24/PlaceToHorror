#include "../../include/core/Input.hpp"
#include "../../include/ecs/entities/Player.hpp"

void Input::update() {
    m_keyboardState = SDL_GetKeyboardState(NULL);
}

bool Input::isKeyDown(SDL_Scancode key) {
    if (m_keyboardState != nullptr) {
        return m_keyboardState[key];
    }
    return false;
}