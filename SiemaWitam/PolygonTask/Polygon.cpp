#include "Polygon.h"
#include <iostream>

Polygon::Polygon()
    : size(0), capacity(0), vertices(nullptr)
{
}

Polygon::~Polygon()
{
    delete[] vertices;
}

void Polygon::add(const Point &point)
{
    if(size == capacity)
    {
        int tempCapacity = (capacity == 0) ? 2 : capacity * 2;
        Point *tempVertices = new Point[tempCapacity];

        for (int i = 0; i < size; i++)
            tempVertices[i] = vertices[i];

        delete[] vertices;
        vertices = tempVertices;
        capacity = tempCapacity;  
    }
    vertices[size++] = point;
}

std::ostream &operator<<(std::ostream &os, const Polygon &source)
{
    for (int i = 0; i < source.size; i++)
    {
        std::cout << "point " << i << ": " << source.vertices[i] << std::endl;
    }
    return os;
}

Polygon Polygon::operator+(const Point &vector) const
{
    Polygon temp = *this;
    for (int i = 0; i < size; i++)
    {
        temp.vertices[i].x += vector.x;
        temp.vertices[i].y += vector.y;
    }
    return temp; 
}

Point& Polygon::operator[](int index) const {
    if (index < 0 || index >= size) {
        throw IndexOutOfBoundsException();
    }
    return vertices[index];
}