#pragma once
#include "Game.h"
#include "Pokémon.cpp"

class Pokemon{

protected:

	Pokemon(std::string nom_texture);
	~Pokemon();


	int PV;
	bool live;

	
private:

	void alive();
	sf::Texture texture_Pokemon;
	sf::Sprite sprite_Pokemon;
	int x;
	int y;
}