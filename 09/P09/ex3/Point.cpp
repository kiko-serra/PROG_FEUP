#include "Point.h"
#include <cmath>
#include <vector>
#include <iostream>

using namespace std;

Point::Point():x_(0),y_(0){}

Point::Point(int x, int y): x_(x), y_(y){}

int Point::x() const{
    return x_;
}

int Point::y() const{
    return y_;
}

void Point::show() const{
    cout << "(" << x() << "," << y() << ")";
}

double Point::distance(Point p1) const{
    return sqrt(pow((p1.x()-x()), 2) + pow((p1.y()-y()), 2));
}
