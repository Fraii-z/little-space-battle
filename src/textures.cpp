#include "../include/textures.hpp"
#include <iostream>

std::vector<Texture2D> loadTextures()
{
    std::vector<Texture2D> textures{};
    Image image{};

    image = LoadImage("image/spaceship/main_ship.png");
    textures.push_back(LoadTextureFromImage(image));
    std::cout << IsTextureReady(textures[0]) << std::endl;
    return textures;
}