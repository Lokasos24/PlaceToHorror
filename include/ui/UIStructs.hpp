#pragma once
#include <string>
#include <functional>

enum class UIAnchor {
    TOP_LEFT,
    TOP_RIGHT,
    BOTTOM_LEFT,
    BOTTOM_RIGHT,
    CENTER
};

struct ButtonConfig {
    float offsetx, offsety;
    float w, h;
    UIAnchor anchor;
    std::string text;
    std::function<void()> callback;
};