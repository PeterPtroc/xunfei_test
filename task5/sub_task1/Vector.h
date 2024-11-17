#ifndef VECTOR_H
#define VECTOR_H
// ↑检查重复

class Vector
{
private:
    double x, y;

public:
    Vector(double x_value, double y_value);
    Vector add(const Vector anotherVector) const;
    void print() const;
    void dir() const;
};

#endif
