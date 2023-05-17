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
    class Team {
    private:
        std::vector<Character*> members;
    public:
        Team(Character* leader); 
        // ~Team(); //destructor
        void add(Character* character);
        void attack(Team* enemy);
        int stillAlive() ;
        void print() ;
    };
}
