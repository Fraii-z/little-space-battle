#ifndef __ENTITY__
    #define __ENTITY__
    #include "../include/point.hpp"

    class GameCamera;

    class Entity
    {
        public:
            Entity(Point pos, float* delta, GameCamera* camera);

        protected:
            Point pos;
            float* delta;
            GameCamera* camera;
    };
#endif