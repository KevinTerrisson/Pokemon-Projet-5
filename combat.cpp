#include "combat.h"
#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>

combat = false;

void Combat::damage()
{                    

}

Combat::Combat()
{
    if (combat == true) {
          load("combat.png")
    }
}

Combat::~Combat()
{

}

int Combat::load()
{

    if (!this->texture.loadFromFile("combat.png"))
    {
        std::cout << "erreur d'image" << std::endl;
        return EXIT_FAILURE;
    }
}


sf::Sprite Combat::GetSprite(int i, int j)
{
    this->sprite.setTexture(this->texture);
    this->sprite.setScale(0.4f, 0.4f);
    this->sprite.setPosition(i * SIZE_TILE, j * SIZE_TILE);
    return this->sprite;
}