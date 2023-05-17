#include "Point.hpp"
using namespace std;

namespace ariel
{

    Point::Point(double x, double y)
    {
        x_cord = x;
        y_cord = y;
    }

    Point::Point()
    {
        x_cord = 0.0;
        y_cord = 0.0;
    }

    // Point::Point(Point &other)
    // {
    //     x_cord = other.getX();
    //     y_cord = other.getY();
    // }

    double Point::distance(Point dest) const
    {
        double dist_x = dest.getX() - x_cord;
        double dist_y = dest.getY() - y_cord;
        return std::sqrt(dist_x * dist_x + dist_y * dist_y);
    }

    double Point::getX() const
    {
        return x_cord;
    }

    double Point::getY() const
    {
        return y_cord;
    }

    void Point::print() const
    {
        cout << "()" << endl;
    }
    Point Point::moveTowards(Point src, Point dest, double distance)
    {
        return Point(0.0, 0.0);
    }

}