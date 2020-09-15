#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include "include/Ninga.h"

using namespace std;

int main()
{
    //derived from window class
    sf::RenderWindow window(sf::VideoMode(800, 500), "Ninga Zompie");

    /* --------------------------- handling background image ---------------------- */
    sf::Texture backgroundTexture;
    try{
        backgroundTexture.loadFromFile("/home/bendary/mohamed yousef/Projects/Codeblocks Projects/NingaZompieGame/graphics/graveyardtilesetnew/png/BG.png");
    }catch(const char* e){
        cerr << e << endl;
    }
    sf::Sprite backgroundSprite;
    sf::Vector2u backgroundSize = backgroundTexture.getSize();
    backgroundSprite.setTexture(backgroundTexture);
    backgroundSprite.setOrigin(backgroundSize.x / 2, backgroundSize.y / 2);

    /* --------------------------- handling tiles --------------------------------*/
    sf::Texture tileTexture;
    try{
        tileTexture.loadFromFile("/home/bendary/mohamed yousef/Projects/Codeblocks Projects/NingaZompieGame/graphics/graveyardtilesetnew/png/Tiles/Tile(1).png");
    }catch(const char* e){
        cerr << e << endl;
    }
    sf::Vector2u tileSize = tileTexture.getSize();
    tileTexture.setRepeated(true);
    sf::Sprite tileSprite;
    tileSprite.setTexture(tileTexture);
    //tileSprite.setRotation(90.f);
    tileSprite.scale(2.5f, 2.5f);
    tileSprite.setPosition(0.f, 300.f);

     /* --------------------------- handling view --------------------------------*/

    sf::View view(sf::FloatRect(0.f, 0.f, 800.f, 500.f));
    window.setView(view);

    Ninga ninga;
    ninga.heroStartEntry();

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        //clear previous frame
        window.clear();

        //draw current frame
        window.draw(backgroundSprite);
        window.draw(tileSprite);
        window.draw(ninga.getSprite());


        sf::View currentView = window.getView();
        view.move(100.f, 100.f);

        //display current frame
        window.display();
    }

    return 0;
}
