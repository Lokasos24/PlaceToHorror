#include <iostream>
#include <SDL.h>
#include "../include/core/Engine.hpp"
#include "../include/managers/ErrorManager.hpp"

using namespace std;

int main(int argc, char* argv[]){
    Engine motor;
    motor.init();

    while(motor.isRunning()){
        motor.run();
    }

    return 0;
}