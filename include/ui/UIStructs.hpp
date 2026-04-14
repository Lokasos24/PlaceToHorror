#pragma once
#include <string>
#include <functional>

struct ButtonConfig {
    int x, y, w, h;
    std::string text;
    std::function<void()> callback;
};