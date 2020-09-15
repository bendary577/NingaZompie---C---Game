#ifndef GAMEENTITY_H
#define GAMEENTITY_H

#include <iostream>
#include <SFML/Graphics.hpp>

class GameEntity
{
    public:
        GameEntity();
        virtual ~GameEntity();

    protected:
        unsigned int health;
        unsigned int power;
        int xposition;
        int yposition;
        sf::Texture texture;
        sf::Sprite sprite;

    private:
};

#endif // GAMEENTITY_H
