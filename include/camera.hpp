#ifndef __CAMERA__
    #define __CAMERA__
    #include "../include/point.hpp"

    class GameCamera
    {
        public:
            GameCamera(Point pos, float sensibility, float* delta);
            void moveCamera();
            void draw();

        private:
            Point pos;
            float sensibility;
            float* delta;
    };
#endif