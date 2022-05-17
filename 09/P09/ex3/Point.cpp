#include "Point.h"
#include<cmath>

Point::Point(int x, int y): x_(x), y_(y){}

int Point::x(){
    return x_;
}

int Point::y(){
    return y_;
}

void Point::show(){
    cout << "(" << x() << "," << y() << ")";
}

double Point::distance(Point p1, Point p2){
    return sqrt(pow((p2.x()-p1.x()), 2) + pow((p2.y()-p1.y()), 2));
}
