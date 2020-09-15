#include "Ninga.h"
using namespace std;

Ninga::Ninga()
{
    //ctor
}

Ninga::~Ninga()
{
    //dtor
}

void Ninga::heroStartEntry(){
    loadTexture();
    sprite.setPosition(0, 200);
}

void Ninga::swordAttack(){}
void Ninga::throwWeaponAttack(){}
void Ninga::run(){}
void Ninga::slide(){}
void Ninga::climb(){}

void Ninga::loadTexture(){
    try {
        texture.loadFromFile("/home/bendary/mohamed yousef/Projects/Codeblocks Projects/NingaZompieGame/graphics/ninjaadventurenew/png/Idle__008.png");
    } catch(const char* e){
        cerr << e<< endl;
    }
    texture.setSmooth(true);
    initializeSprite();
}

void Ninga::initializeSprite(){
    sprite.setTexture(texture);
    initialScale();
}

void Ninga::setSprite(sf::Sprite sprite){
    this->sprite = sprite;
}

sf::Sprite Ninga::getSprite(){
    return this->sprite;
}

void Ninga::initialScale(){
    sf::Vector2f scale = sprite.getScale();
    sprite.scale(scale.x/4, scale.y/4);
}







