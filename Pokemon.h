#pragma once

#include "Pokémon.cpp"

class Pokemon{

protected:

	Pokemon(std::string nom_texture);
	~Pokemon();


	int PV;
	int attack;
	int attack_spe;
	int defence;
	int defence_spe;
	int vitesse;
	int niveau;

	
private:

	sf::Texture texture_Pokemon;
	sf::Sprite sprite_Pokemon;
	int x;
	int y;
}