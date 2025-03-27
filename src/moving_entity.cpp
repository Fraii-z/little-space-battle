#include "../include/moving_entity.hpp"

MovingEntity::MovingEntity(Point pos, float maxSpeed, float weight, float turnForce, float* delta, GameCamera* camera) :
Entity(pos, delta, camera), maxSpeed(maxSpeed), weight(weight), turnForce(turnForce)
{}

void MovingEntity::move()
{

}