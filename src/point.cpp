#include "../include/point.hpp"
#include <cmath>

Point centralize(Point pos, Point size, float direction)
{
    return { pos.x - (size.x/2) * std::cos(direction),  pos.y - (size.x/2) * std::cos(direction) };
}