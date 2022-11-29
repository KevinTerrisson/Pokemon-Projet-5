#include "combat.h"
#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>


Combat::Combat()
{
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



