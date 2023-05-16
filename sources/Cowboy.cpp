#include "Character.hpp"
#include "Cowboy.hpp"
#include "Point.hpp"

using namespace ariel;

Cowboy::Cowboy(string name, Point location)
    : Character(location, 110, name)
{
    bullets = 6;
}
void Cowboy::shoot(Character *) const
{
}
bool Cowboy::hasboolets() const
{
    return true;
}
void Cowboy::reload()
{
}
string Cowboy::print()
{
    return"";
}