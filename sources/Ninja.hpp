#pragma once
#include <string>
#include <iostream>
#include "Character.hpp"
using namespace std;

namespace ariel
{
    class Ninja : public Character
    {
    private:
        int speed;

    public:
        Ninja(Point location,int life, string name,int speed);
        void move(Character *enemy);
        void slash(Character *enemy);
        string print();
    };


}
