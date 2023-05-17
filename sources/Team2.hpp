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
    class Team2 {
    private:
        std::vector<Character*> members;
    public:
        Team2(Character* leader); 
        // ~Team2(); //destructor
        void add(Character* character);
        void attack(Team2* enemy);
        int stillAlive() ;
        void print();
    };
}
