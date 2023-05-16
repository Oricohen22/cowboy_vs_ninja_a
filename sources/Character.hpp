#pragma once
#include "Point.hpp"
#include <string>

using namespace std;
namespace ariel{


class Character{
private:
Point location;
string name;
int life;

public:
Character(Point location,int life, string name);
Character();
bool isAlive();
double distance(Character &other);
void hit(int hit_num);
string getName();
Point getLocation();
string print();

};
}