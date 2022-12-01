#include "Playground.h"
#include "macro.h"
#include "Perso.h"
#include "const.h"
#include "Decor.h"
#include "combat.h"
#include "Pokemon.h"
#include "Capaciter.h"
#include "Game.h"
#include "figthMenu.h"

#include <iostream>
#include <SFML/Graphics.hpp>


/*
texture.setRepeated(true);
sf::Sprite sprite;
sprite.setTexture(texture);
//sprite.setTextureRect(sf::IntRect(100, 100, 320, 320));       //affiche une certaine zone de la texture

sprite.setColor(sf::Color(255, 255, 255, 128));                 //couleur (actuellement transparence)
sprite.setScale(sf::Vector2f(0.5f, 0.5f));                      //taille de la texture
sprite.setPosition(sf::Vector2f(10.f, 50.f));                   //Position de la texture
sprite.setOrigin(sf::Vector2f(25.f, 25.f));                     //change le point d'origine de la texture
*/


int main()
{
   // sf::RenderWindow window(sf::VideoMode(WINDOW_SIZE_X, WINDOW_SIZE_Y), "SFML works!");
   // Playground pg;

    Combat font;
    Capaciter f;

    //test

   /* pg.load();

    Perso perso("texture/trainer.png");
    Decor rock1("texture/pokemon_rock.png", false, 300, 300);
    window.setFramerateLimit(30);*/
        
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            switch (event.type) 
            {
            case sf::Event::Closed:
                window.close();
                break;

            }
        }
        /*sf::Sprite perso_sprite = perso.sprite();
        sf::Sprite rock1_sprite = rock1.sprite();

        sf::FloatRect perso_box = perso_sprite.getGlobalBounds();
        sf::FloatRect rock1_box = rock1_sprite.getGlobalBounds();
 */

      
       
        font.load();

        Pokemon poke("texture/Nucleos.png"); //img ramplacable juste penser a modfif le lien
        Pokemon poke2("texture/Nucleos.png");   //img ramplacable juste penser a modfif le lien
        window.setFramerateLimit(30);

        while (window.isOpen())
        {
            sf::Event event;
            while (window.pollEvent(event))
            {
                while (font.figth == true)
                {
                    if (event.type == Event::KeyReleased)
                    {
                        if (event.key.code == Keyboard::Up)
                        {
                            mainMenu.MoveUp();
                            break;
                        }

                        if (event.key.code == Keyboard::Down)
                        {
                            mainMenu.MoveDown();
                            break;
                        }
                        if (event.key.code == Keyboard::Enter)
                        {
                            if (x == 0) {
                                f.damage();
                            }

                            else if (x == 1)
                            {
                                font.figth = false;
                            }
                        }
                }
            }
            sf::Sprite poke_sprite = poke.sprite();
            sf::Sprite poke2_sprite = poke2.sprite();


            window.clear();



          window.clear();
        for (int i = 0; i < WINDOW_SIZE_Y / SIZE_TILE; i++) {
            for (int j = 0; j < WINDOW_SIZE_X / SIZE_TILE; j++) {
                window.draw(font.GetSprite(i, j));
            }
        }
        window.draw(shape);
        //window.draw(perso_sprite);
        //window.draw(rock1_sprite);
        window.display();
    }

    return 0;
}