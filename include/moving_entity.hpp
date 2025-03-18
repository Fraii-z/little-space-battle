#ifndef __MOVING_ENTITY__
    #define __MOVING_ENTITY__
    #include "../include/entity.hpp"

    class MovingEntity : public Entity
    {
        public:
            //MovingEntity(float maxSpeed);
        
        protected:
            float speed;
            float maxSpeed;
            float weight;
    };
#endif