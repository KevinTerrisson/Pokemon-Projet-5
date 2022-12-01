#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include "Game.h"


#define Max_menu 2

class menuFigth {

private:

    int selctMenu();
     menuFigth();
     ~menuFigth();

public:

    int draw(sf::RenderWindow& window);
    int MoveUp();
    int MoveDown();
    int bouton();
};

