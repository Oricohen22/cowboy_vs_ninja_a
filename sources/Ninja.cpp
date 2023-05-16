#include "Ninja.hpp"
using namespace ariel;

Ninja::Ninja(Point location,int life, string name, int speed):Character(location,life,name),speed(speed)
{
   
}

void Ninja::move(Character *enemy)
{
}

void Ninja::slash(Character *enemy)
{
}

string Ninja::print()
{
    return "";
}


