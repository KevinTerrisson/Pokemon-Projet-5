#include "combat.h"
#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>

combat = false;

void Combat::damage()
{                    

}

void start_combat() {
    if (combat == true) {
        
    }
}

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

