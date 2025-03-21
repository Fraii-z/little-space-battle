#ifndef __CAMERA__
    #define __CAMERA__
    #include "../include/point.hpp"

    class GameCamera
    {
        public:
            GameCamera(Point pos, float sensibility, float* delta, float scale);
            void moveCamera();
            //getters
            Point getPos();
            float getScale();

        private:
            Point pos;
            float sensibility;
            float* delta;
            float scale;
    };
#endif