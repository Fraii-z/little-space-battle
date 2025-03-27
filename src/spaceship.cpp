#include "../include/spaceship.hpp"
#include "../include/camera.hpp"
#include <iostream>
SpaceShip::SpaceShip(Point pos, float maxSpeed, float weight, float turnForce, float* delta, GameCamera* camera) :
MovingEntity(pos, maxSpeed, weight, turnForce, delta, camera)
{}

void SpaceShip::draw(Texture2D& texture)
{
    DrawTexturePro(texture, {0, 0, 32, 32}, {300, 300, 100, 100}, {50, 50}, this->direction, WHITE);
}

void SpaceShip::rotate()
{
    this->direction += 0.1;
}