#ifndef __ENTITY__
    #define __ENTITY__
    #include "../include/point.hpp"

    class Entity
    {
        public:
            Entity(Point pos);

        protected:
            Point pos;
    };
#endif