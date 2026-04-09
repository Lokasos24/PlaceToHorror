#pragma once
#include <iostream>
#include <string>
#include <SDL.h>

using namespace std;

//Que es una macro
#define ASSERT(condition, message) \
    if(!(condition)){ \
        ErrorManager::logError(message, __FILE__, __LINE__); \
        SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, "ERROR CRITICO", message, NULL); \
        exit(1); \
    }

class ErrorManager{
    public:
        static void logError(const string& message, const char* file, int line) {
            cerr << "\n[ERROR CRITICO]" << endl;
            cerr << "Mensaje: " << message << flush;
            cerr << "Archivo: " << file << flush;
            cerr << "Linea:   " << line << flush;
            cerr << "------------------------\n" << endl;
        }

        static void logWarning(const string& message) {
            cout << "[WARNING]: " << message << flush << endl;
        }
};