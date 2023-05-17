#include "Team.hpp"
#include <algorithm>
#include <limits>
using namespace ariel;

Team::Team(Character *leader)
{
    members.push_back(leader);
}

// Team::~Team()
// {
//     for (auto member : members)
//     {
//         delete member;
//     }
// }

void Team::add(Character *Character)
{
}

void Team::attack(Team *enemy)
{
}

int Team::stillAlive() 
{
    return 0;
}

void Team::print(){

}