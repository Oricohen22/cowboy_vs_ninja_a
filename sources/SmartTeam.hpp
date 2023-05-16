#pragma once

#include <string>
#include <iostream>
#include <vector>
#include "Point.hpp"
#include "Cowboy.hpp"
#include "Ninja.hpp"
#include "OldNinja.hpp"
#include "YoungNinja.hpp"
#include "TrainedNinja.hpp"

namespace ariel {
    class SmartTeam {
    private:
        std::vector<Character*> members;
    public:
        SmartTeam(Character* leader); 
        ~SmartTeam(); //destructor
        void add(Character* character);
        void attack(Team* enemy);
        int stillAlive() ;
        void print() ;
    };
}
