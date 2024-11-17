#include <iostream>
#include <cmath>
#include "Vector.h"

// ↓创建一个构造函数
Vector::Vector(double x_value, double y_value) : x(x_value), y(y_value) {}

Vector Vector::add(const Vector anotherVector) const
{
    return Vector(x + anotherVector.x, y + anotherVector.y);
}

void Vector::print() const
{
    std::cout << "vector(" << x << "," << y << ")" << std::endl;
}

void Vector::dir() const
{
    double length = std::sqrt(x * x + y * y);
    std::cout << "length:" << length << std::endl;
}
