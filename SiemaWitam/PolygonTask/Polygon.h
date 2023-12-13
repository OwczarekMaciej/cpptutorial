#ifndef POLYGON_H
#define POLYGON_H
#include "Point.h"
#include "IndexOutOfBoundsException.h"

class Polygon
{
    friend std::ostream &operator<<(std::ostream &os, const Polygon &source);
private:
    int size;
    int capacity;
    Point *vertices;

public:
    Polygon();
    ~Polygon();
    void add(const Point &point);

    Polygon operator+(const Point &vector) const;
    Point &operator[](int index) const;

};
#endif //POLYGON_H