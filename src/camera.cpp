#include "../include/camera.hpp"
#include "../include/point.hpp"
#include "../raylib/raylib.h"

GameCamera::GameCamera(Point pos, float sensibility, float* delta) : pos(pos), sensibility(sensibility), delta(delta)
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

void GameCamera::draw()
{
    BeginDrawing();
    ClearBackground(RAYWHITE);
    DrawRectangle(this->pos.x, this->pos.y, 960, 540, RED);
    EndDrawing();
}