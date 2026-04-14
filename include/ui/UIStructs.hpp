#pragma once
#include <string>
#include <functional>

struct ButtonConfig {
    float x, y, w, h;
    std::string text;
    std::function<void()> callback;
};