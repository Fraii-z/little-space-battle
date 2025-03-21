#ifndef __SPACESHIP__
    #define __SPACESHIP__
    #include "../include/moving_entity.hpp"

    class GameCamera;

    class SpaceShip : public MovingEntity
    {
        public:
            SpaceShip(Point pos, float maxSpeed, float weight, float turnForce, float* delta, GameCamera* camera);
            void draw(Texture2D& texture);
            //debug
            void rotate();

        private:

    };
#endif