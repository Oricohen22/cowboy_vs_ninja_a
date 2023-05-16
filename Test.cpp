#include "doctest.h"
#include "Character.hpp"
#include "Point.hpp"
#include "Team.hpp"
#include "Ninja.hpp"

using namespace std;
using namespace ariel;



TEST_CASE("Point class tests")
{
    SUBCASE("Default constructor")
    {
        Point p1;
        CHECK(p1.getX() == 0.0);
        CHECK(p1.getY() == 0.0);
    }

    SUBCASE("Constructor with parameters")
    {
        Point p2(3.0, 4.0);
        CHECK(p2.getX() == 3.0);
        CHECK(p2.getY() == 4.0);
    }

    SUBCASE("Copy constructor")
    {
        Point p2(3.0, 4.0);
        Point p3(p2);
        CHECK(p3.getX() == 3.0);
        CHECK(p3.getY() == 4.0);
    }
}

TEST_CASE("Character class tests")
{
    SUBCASE("Constructor with parameters")
    {
        Point location(3.0, 4.0);
        int life = 100;
        string name = "John";

        Character c1(location, life, name);

        CHECK(c1.getLocation().getX() == 3.0);
        CHECK(c1.getLocation().getY() == 4.0);
        CHECK(c1.getName() == "John");
        CHECK(c1.isAlive() == true);
    }

    SUBCASE("Default constructor")
    {
        Character c2;

        CHECK(c2.getLocation().getX() == 0.0);
        CHECK(c2.getLocation().getY() == 0.0);
        CHECK(c2.getName() == "Bot");
        CHECK(c2.isAlive() == true);
    }

    SUBCASE("Distance between characters")
    {
        Point location1(3.0, 4.0);
        Point location2(6.0, 8.0);

        Character c3(location1, 100, "John");
        Character c4(location2, 80, "Mike");

        double distance = c3.distance(c4);
        CHECK(distance == 5.0);
    }

    SUBCASE("Character hit")
    {
        Character c5(Point(3.0, 4.0), 100, "John");

        c5.hit(20);

        CHECK(c5.isAlive() == true);
    }

    SUBCASE("Print character name")
    {
        Character c6(Point(3.0, 4.0), 100, "John");

        string name = c6.print();

        CHECK(name == "John");
    }
}

TEST_CASE("Ninja class tests")
{
    SUBCASE("Constructor with parameters")
    {
        Point location(3.0, 4.0);
        int life = 100;
        string name = "Ninja";
        int speed = 10;

        Ninja n1(location, life, name, speed);

        CHECK(n1.getLocation().getX() == 3.0);
        CHECK(n1.getLocation().getY() == 4.0);
        CHECK(n1.getName() == "Ninja");
        CHECK(n1.isAlive() == true);
        
    }

SUBCASE("Move method")
    {
        Point location1(3.0, 4.0);
        Point location2(6.0, 8.0);

        Ninja n2(location1, 100, "Ninja", 10);
        Character c3(location2, 80, "Enemy");

        n2.move(&c3);

        CHECK(n2.getLocation().getX() == 6.0);

    SUBCASE("Move method")
    {
        Point location1(3.0, 4.0);
        Point location2(6.0, 8.0);

        Ninja n2(location1, 100, "Ninja", 10);
        Character c3(location2, 80, "Enemy");

        n2.move(&c3);

        CHECK(n2.getLocation().getX() == 6.0);
        CHECK(n2.getLocation().getY() == 8.0);
    }



    SUBCASE("Print character name")
    {
        Ninja n4(Point(3.0, 4.0), 100, "Ninja", 10);

        string name = n4.print();

        CHECK(name == "Ninja");
    }
}



    SUBCASE("Add method")
    {
        Character* leader = new Character(Point(3.0, 4.0), 100,"leader");
        Character* member = new Character(Point(5.0, 6.0),80, "Member");
        Team team(leader);

        team.add(member);

        CHECK(team.stillAlive() == 2);
    }

    SUBCASE("Attack method")
    {
        Character* leader1 = new Character(Point(3.0, 4.0),100, "Leader1");
        Character* member1 = new Character(Point(5.0, 6.0),80, "Member1");
        Character* member2 = new Character(Point(7.0, 8.0),90, "Member2");
        Team team1(leader1);
        team1.add(member1);
        team1.add(member2);

        Character* leader2 = new Character(Point(2.0, 3.0),120, "Leader2");
        Team team2(leader2);

        team1.attack(&team2);

        CHECK(team1.stillAlive() == 3);
        CHECK(team2.stillAlive() == 0);
    }




SUBCASE("Print character name")
{
    Ninja n4(Point(3.0, 4.0), 100, "Ninja", 10);

    string name = n4.print();

    CHECK(name == "Ninja");
}

}

TEST_CASE("Team class tests")
{
SUBCASE("Constructor with leader")
{
Character* leader = new Character(Point(3.0, 4.0), 100, "leader");
Team team(leader);



    CHECK(team.stillAlive() == 1);
}

SUBCASE("Add method")
{
    Character* leader = new Character(Point(3.0, 4.0), 100, "Leader");
    Character* member = new Character(Point(5.0, 6.0), 80, "Member");
    Team team(leader);

    team.add(member);

    CHECK(team.stillAlive() == 2);
}

SUBCASE("Attack method")
{
    Character* leader1 = new Character(Point(3.0, 4.0), 100, "Leader1");
    Character* member1 = new Character(Point(5.0, 6.0), 80, "Member1");
    Character* member2 = new Character(Point(7.0, 8.0), 90, "Member2");
    Team team1(leader1);
    team1.add(member1);
    team1.add(member2);

    Character* leader2 = new Character(Point(2.0, 3.0), 120, "Leader2");
    Team team2(leader2);

    team1.attack(&team2);

    CHECK(team1.stillAlive() == 3);
    CHECK(team2.stillAlive() == 0);
}

}