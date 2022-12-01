#pragma once
#include "Game.h"
#include "combat.cpp"

class Combat {

private:

	bool figth;

	sf::Texture texture;
	sf::Sprite sprite;

public:

	Combat();
	~Combat();

	int load();

	int bouton();

};