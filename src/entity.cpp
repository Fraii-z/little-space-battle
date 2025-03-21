#include "../include/entity.hpp"
#include "../include/camera.hpp"

Entity::Entity(Point pos, float* delta, GameCamera* camera) : pos(pos), delta(delta), camera(camera)
{}