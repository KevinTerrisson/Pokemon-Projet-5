#pragma once
#include "combat.cpp"

class Combat {

private:

	int figth;

	sf::Texture texture;
	sf::Sprite sprite;

public:

	Combat();
	~Combat();

	int load();

	int bouton();

};