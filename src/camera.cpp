#include "../include/camera.hpp"
#include "../include/point.hpp"
#include "../raylib/raylib.h"

GameCamera::GameCamera(Point pos, float sensibility, float* delta, float scale) : pos(pos), sensibility(sensibility), delta(delta), scale(scale)
{}

void GameCamera::moveCamera()
{
    float vec{ this->sensibility * *this->delta };
    if (IsKeyDown(65)) // touche q
    {
        this->pos.x -= vec;
    }
    if (IsKeyDown(68)) // touche d
    {
        this->pos.x += vec;
    }
    if (IsKeyDown(87)) // touche z
    {
        this->pos.y -= vec;
    }
    if (IsKeyDown(83)) // touche s
    {
        this->pos.y += vec;
    }
}

Point GameCamera::getPos()
{
    return this->pos;
}

float GameCamera::getScale()
{
    return this->scale;
}