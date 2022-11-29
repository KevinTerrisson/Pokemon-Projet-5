#pragma once
#include "combat.cpp"

class Combat {

private:

	sf::Texture texture;
	sf::Sprite sprite;

public:

	Combat();
	~Combat();

	int load();
};