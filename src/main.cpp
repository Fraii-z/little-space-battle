#include "../raylib/raylib.h"
#include "../include/camera.hpp"

int main()
{
    InitWindow(0, 0, "plateformer");
    const int monitor{ GetCurrentMonitor() };
    const int windowWidth{ GetMonitorWidth(monitor) };
    const int windowheight{ GetMonitorHeight(monitor) };
    SetWindowPosition(0, 0);
    SetWindowSize(windowWidth, windowheight);
    //Image icon{ LoadImage("image/icon.png") };
    //ImageFormat(&icon, PIXELFORMAT_UNCOMPRESSED_R8G8B8A8);
    //SetWindowIcon(icon);
    //if (!IsWindowFullscreen())
    //{
    //    ToggleFullscreen();
    //}
    SetTargetFPS(60);
    
    float delta{};
    GameCamera camera{{0, 0}, 300, &delta};

    while (!WindowShouldClose())
    {
        delta = GetFrameTime();
        camera.moveCamera();
        camera.draw();
    }
    CloseWindow();

	return 0;
}