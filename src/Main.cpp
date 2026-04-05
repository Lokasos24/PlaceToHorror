#include <iostream>
#include <SDL.h>
#include "../include/core/Engine.hpp"

using namespace std;

int main(int argc, char* argv[]){
    Engine motor;
    motor.init();

    while(motor.isRunning()){
        motor.run();
    }

    cout<<"Se termino de ejecutar el motor";

    return 0;
}