#include "Character.hpp"
using namespace ariel;

Character::Character(Point location, int life,string name)
{
    location = location;
    name = name;
    life = life;
}

Character::Character()
{
    location = Point();
    name = "Bot";
}


bool Character::isAlive()
{
    return true;
}

double Character::distance(Character &other)
{
    return 0.0;
}

void Character::hit(int damage) {}

string Character::getName()
{
    return "name";
}

Point Character::getLocation()
{
    return location;
}
string Character::print()
{
    return name;
}
