#pragma once

#include <iostream>

namespace fractal {
namespace utils {

class Point {
public:
    Point(double x, double y) : x(x), y(y) {}

    Point& operator+=(const Point& rhs);
    Point& operator-=(const Point& rhs);
    Point& operator*=(const double scalar);
    Point operator*(const double scalar);

    // implement addition, scalar multiplication, subtraction
    friend Point operator+(Point lhs, const Point& rhs);
    friend Point operator-(Point lhs, const Point& rhs);
    friend Point operator*(double lhs, const Point& rhs);

    friend std::ostream& operator<<(std::ostream& out, const Point& p);

private:
    double x;
    double y;
}

} // utils
} // fractal
