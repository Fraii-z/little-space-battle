#include "../include/camera.hpp"
#include "../include/textures.hpp"
#include "../include/spaceship.hpp"

int main()
{
    InitWindow(0, 0, "little space battle");
    const int monitor{ GetCurrentMonitor() };
    const int windowWidth{ GetMonitorWidth(monitor) };
    const int windowheight{ GetMonitorHeight(monitor) };
    SetWindowPosition(0, 0);
    SetWindowSize(windowWidth, windowheight);
    //Image icon{ LoadImage("image/icon.png") };
    //ImageFormat(&icon, PIXELFORMAT_UNCOMPRESSED_R8G8B8A8);
    //SetWindowIcon(icon);
    if (!IsWindowFullscreen())
    {
        ToggleFullscreen();
    }
    //SetTargetFPS(60);
    
    float delta{};
    GameCamera camera{{0, 0}, 300, &delta, 2};
    SpaceShip mainShip({0, 0}, 237, 400, 50, &delta, &camera);
    std::vector<Texture2D> allTextures{ loadTextures() };

    while (!WindowShouldClose())
    {
        //update
        delta = GetFrameTime();
        camera.moveCamera();
        mainShip.rotate();

        //draw
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawFPS(5, 5);

        mainShip.draw(allTextures[0]);

        EndDrawing();
    }
    CloseWindow();

	return 0;
}