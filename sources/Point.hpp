#pragma once

#include <string>
#include <iostream>
#include <sstream>
#include <stdio.h>
#include <cmath>


namespace ariel
{

    class Point
    {
    private:
        double x_cord;
        double y_cord;

    public:
        Point(double x, double y);
        Point();
        Point(Point &other);
        double distance(Point src)const;
        double getX()const;
        double getY()const;
        void print()const;
        Point moveTowards(Point src, Point dst, double dis);
    };
}