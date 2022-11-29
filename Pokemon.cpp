#include "Pokemon.h"


//stats nucleos
PV = 152;
attack = 82;
attack_spe = 157;
defence = 105 ;
defence_spe = 102 ;
vitesse = 72 ;
//type = "PSY" ;
niveau = 50 ;


Pokemon::Pokemon(std::string nom_texture)
{
    x = 58;
    y = 55;
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

sf::Sprite Pokemon::sprite()
{
    return this->sprite_pokemon;
}