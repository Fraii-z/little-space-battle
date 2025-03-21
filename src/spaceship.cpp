#include "../include/spaceship.hpp"
#include "../include/camera.hpp"
#include <iostream>
SpaceShip::SpaceShip(Point pos, float maxSpeed, float weight, float turnForce, float* delta, GameCamera* camera) :
MovingEntity(pos, maxSpeed, weight, turnForce, delta, camera)
{}

void SpaceShip::draw(Texture2D& texture)
{
    DrawTextureEx(texture, centralize( this->pos - camera->getPos(), {64, 64}, this->direction).toVector2(), this->direction, camera->getScale(), WHITE);
}

void SpaceShip::rotate()
{
    this->direction++;
}