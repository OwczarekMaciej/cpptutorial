#ifndef POINT_H
#define POINT_H
#include <iostream>

class Point
{
    friend std::ostream &operator<<(std::ostream &os, const Point &source);
public:
    double x;
    double y;
    Point(double x = 0, double y = 0);
};




#endif //POINT_H