#include "../../include/entities/Player.hpp"
using namespace std;

void Player::update(float deltaTime){
    if(Input::getInstance().isKeyDown(SDL_SCANCODE_W)) m_transform.y -= m_speed * deltaTime;
    if(Input::getInstance().isKeyDown(SDL_SCANCODE_S)) m_transform.y += m_speed * deltaTime;
    if(Input::getInstance().isKeyDown(SDL_SCANCODE_A)) m_transform.x -= m_speed * deltaTime;
    if(Input::getInstance().isKeyDown(SDL_SCANCODE_D)) m_transform.x += m_speed * deltaTime;
}

void Player::render(){
    cout<<"Player pos: "<< m_transform.x << ", " << m_transform.y << endl;
}