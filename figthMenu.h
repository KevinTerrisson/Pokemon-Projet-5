#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include "Game.h"


#define Max_menu 2

class menuFigth {

private:

    int selctMenu();
     MenuFigth();
     ~MenuFigth();

public:

   

    void draw(sf::RenderWindow& window);
    void MoveUp();
    void MoveDown();

};

int Combat::bouton()
{
    sf::RectangleShape rectangle(sf::Vector2f(120.f, 50.f));
    rectangle.setSize(sf::Vector2f(100.f, 100.f));
}