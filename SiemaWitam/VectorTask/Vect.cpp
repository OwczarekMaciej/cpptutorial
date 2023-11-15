#include "Vect.h"
#include <iostream>
#include <limits>

Vect::Vect(int size)
    : size(size)
{
    // array = (double *)malloc(sizeof(double) * size);
    array = (double *)calloc(size, sizeof(double));
    alloc_check();
}

Vect::Vect(const Vect &source)
    : size(source.size)
{
    array = (double *)calloc(size, sizeof(double));
    alloc_check();
    for (int i = 0; i < size; i++)
    {
        array[i] = source.array[i];
    }
}

Vect::~Vect()
{
    free(array);
}

void Vect::alloc_check()
{
    if (array == NULL)
    {
        std::cout << "Wrong memory alloc" << std::endl;
        abort();
    }
}

void Vect::print() const
{
    std::cout << "[ ";
    for (int i = 0; i < size - 1; i++)
    {
        std::cout << array[i] << ", ";
    }
    std::cout << array[size - 1];
    std::cout << "]" << std::endl;
}

void Vect::setElement(int index, double value)
{
    array[index] = value;
}

int Vect::getSize() const
{
    return size;
}

double Vect::getAverage() const
{
    double avg{};
    for (int i = 0; i < size; i++)
    {
        avg += array[i];
    }
    return avg / size;
}

double Vect::getMin() const
{
    double min_val = std::numeric_limits<double>::infinity();
    for (int i = 0; i < size; i++)
    {
        if (min_val > array[i])
            min_val = array[i];
    }
    return min_val;
}

Vect Vect::concatenate(const Vect &rhs)
{
    Vect temp(size + rhs.size);
    for (int i = 0; i < size; i++)
    {
        temp.array[i] = array[i];
    }
    for (int j = 0; j < rhs.size; j++)
    {
        temp.array[j + size] = rhs.array[j];
    }
    return temp;
}