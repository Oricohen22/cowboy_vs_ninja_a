#pragma once
#include "Character.hpp"
using namespace std;

namespace ariel{
    class Cowboy : public Character{
        int bullets;

        public:
            Cowboy(string, Point);
            void shoot(Character*)const; 
            bool hasboolets()const;
            void reload();
            string print();
    };
}