#ifndef __POINT__
    #define __POINT__
    #include "../raylib/raylib.h"

    struct Point
    {
        float x;
        float y;

        Point operator+(Point other)
        {
            return { x + other.x, y + other.y};
        }

        Point operator-(Point other)
        {
            return { x - other.x, y - other.y};
        }

        Vector2 toVector2()
        {
            return { x, y };
        }
    };

    Point centralize(Point pos, Point size, float direction);
#endif