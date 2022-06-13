#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

#include "Point2d.h"

void Point2d::translate(const Point2d& t){
    set_x(x + t.x);
    set_y(y + t.y);
}

double Point2d::distance_to(const Point2d& p) const{
    return sqrt(pow(x-p.x, 2) + pow(y - p.y, 2));
}