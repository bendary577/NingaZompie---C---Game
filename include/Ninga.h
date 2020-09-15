#ifndef NINGA_H
#define NINGA_H
#include <iostream>
#include <SFML/Graphics.hpp>
#include "GameEntity.h"

class Ninga : public GameEntity
{
    public:
        Ninga();
        virtual ~Ninga();

        void run();
        void heroStartEntry();
        void swordAttack();
        void throwWeaponAttack();
        void slide();
        void climb();
        void loadTexture();
        void initializeSprite();

        sf::Sprite getSprite();
        void setSprite(sf::Sprite);

        sf::Texture getTexture();
        void setTexture(sf::Texture);

        void initialScale();

    protected:

    private:
        unsigned int numberOfThrowableWeapons;

};


#endif // NINGA_H
