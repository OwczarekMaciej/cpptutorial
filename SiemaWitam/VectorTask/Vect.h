#ifndef __VECT_H__
#define __VECT_H__

class Vect
{
private:
    int size;
    double *array;
    void alloc_check();

public:
    Vect(int size = 1);
    Vect(const Vect &source);
    ~Vect();
    
    int getSize() const;
    double getAverage() const;
    double getMin() const;
    void print() const;
    void setElement(int index, double value);

    Vect concatenate(const Vect &rhs);
};

#endif