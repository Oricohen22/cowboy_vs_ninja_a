#include "Team.hpp"
#include <algorithm>
#include"Team2.hpp"
#include <limits>
using namespace ariel;

Team2::Team2(Character *leader)
{
    members.push_back(leader);
}

// Team2::~Team2()
// {
//     for (auto member : members)
//     {
//         delete member;
//     }
// }

void Team2::add(Character *Character)
{
}

void Team2::attack(Team2 *enemy)
{
}

int Team2::stillAlive() 
{
    return 0;
}

void Team2::print(){
    
}