#include "figthMenu.h"

int menuFigth::selctMenu()
{
	return 0;
}

menuFigth::MainMenu()
{
	//Attaque
	mainMenu[0].setFont(font);
	mainMenu[0].setFillColor(Color::White);
	mainMenu[0].setString("Attaque");
	mainMenu[0].setCharacterSize(30);
	mainMenu[0].setPosition(105, 800);

	//Options
	mainMenu[1].setFont(font);
	mainMenu[1].setFillColor(Color::White);
	mainMenu[1].setString("Options");
	mainMenu[1].setCharacterSize(30);
	mainMenu[1].setPosition(105, 850);


}

menuFigth::MenuFigth()
{
}

menuFigth::~MenuFigth()
{
}

void menuFigth::draw(sf::RenderWindow& window)
{
	for (int i = 0; i < Max_main_menu; ++i) {
		window.draw(mainMenu[i]);
	}
}

void menuFigth::MoveUp()
{
	if (MainMenuSelected - 1 >= -1) {
		mainMenu[MainMenuSelected].setFillColor(Color::White);

		MainMenuSelected--;
		if (MainMenuSelected == -1) {
			MainMenuSelected = 2;
		}
		mainMenu[MainMenuSelected].setFillColor(Color::Blue);
	}
}

void menuFigth::MoveDown()
{
	if (MainMenuSelected + 1 >= 0) {
		mainMenu[MainMenuSelected].setFillColor(Color::White);

		MainMenuSelected++;
		if (MainMenuSelected == 3) {
			MainMenuSelected = 0;
		}
		mainMenu[MainMenuSelected].setFillColor(Color::Blue);
	}
}
