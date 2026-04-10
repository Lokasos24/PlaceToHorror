#pragma once
struct Transform {
    float x, y;
    float scaleX, scaleY;
    float rotation;

    Transform(): x(0), y(0), scaleX(1), scaleY(1), rotation(0) {}
};