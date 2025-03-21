#ifndef __MOVING_ENTITY__
    #define __MOVING_ENTITY__
    #include "../include/entity.hpp"

    class GameCamera;

    class MovingEntity : public Entity
    {
        public:
            MovingEntity(Point pos, float maxSpeed, float weight, float turnForce, float* delta, GameCamera* camera);
            void move();
        
        protected:
            float maxSpeed;
            float weight;
            float turnForce;
            float speed = 0;
            float direction = 0;
            float angularSpeed = 0;
    };
#endif