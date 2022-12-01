#include "figthMenu.h"
#include "Game.h"
#include <SFML/Graphics.hpp>

int menuFigth::selctMenu()
{
	return 0;
}

menuFigth::MainMenu()
{
	//Attaque
	MainMenu[0].setFont(font);
	MainMenu[0].setFillColor(Color::White);
	MainMenu[0].setString("Attaque");
	MainMenu[0].setCharacterSize(30);
	MainMenu[0].setPosition(105, 800);

	//Fuite
	MainMenu[1].setFont(font);
	MainMenu[1].setFillColor(Color::White);
	MainMenu[1].setString("Fuite");
	MainMenu[1].setCharacterSize(30);
	MainMenu[1].setPosition(105, 850);


}

menuFigth::menuFigth()
{
}

menuFigth::~menuFigth()
{
}

int menuFigth::draw(sf::RenderWindow& window)
{
	for (int i = 0; i < 2; ++i) {
		window.draw(menuFigth[i]);
	}
}

int menuFigth::MoveUp()
{
	if (selctMenu - 1 >= -1) {
		MainMenu[selctMenu].setFillColor(Color::White);

		selctMenu--;
		if (selctMenu == -1) {
			selctMenu = 2;
		}
		MainMenu[selctMenu].setFillColor(Color::black);
	}
}

int menuFigth::MoveDown()
{
	if (selctMenu + 1 >= 0) {
		MainMenu[selctMenu].setFillColor(Color::White);

		selctMenu++;
		if (selctMenu == 3) {
			selctMenu = 0;
		}
		MainMenu[selctMenu].setFillColor(Color::black);
	}
}


int menuFigth::bouton()
{
	sf::RectangleShape rectangle(sf::Vector2f(120.f, 50.f));
	rectangle.setSize(sf::Vector2f(100.f, 100.f));
}
