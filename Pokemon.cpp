#include "Pokemon.h"


//stats nucleos
PV = 152;
bool = true;

Pokemon::Pokemon(std::string nom_texture)
{
    x = 700;
    y = 700;
    if (!this->texture_pokemon.loadFromFile(nom_texture))
    {
        std::cout << "Erreur de chargement de la texture du personnage" << std::endl;
    }
    this->sprite_Pokemon.setTexture(this->texture_Pokemon);
    this->sprite_Pokemon.setPosition(x, y);
    this->sprite_Pokemon.setTextureRect(sf::IntRect(30, 0, 30, 30));
}
Pokemon::~Pokemon()
{

}

void Pokemon::alive()
{
    if (live = !true) {
        //stope le jeu car plus de pokemon en vie
        count << "vous n'avez plus de pokemon, vous avez perdu ! Vous devez 1700000000 poke$"
    }
}

sf::Sprite Pokemon::sprite()
{
    return this->sprite_pokemon;
}

