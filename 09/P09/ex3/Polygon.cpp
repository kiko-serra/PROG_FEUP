#include "Polygon.h"
#include "Point.h"
#include <cmath>
#include <vector>
#include <iostream>

using namespace std;

Polygon::Polygon():points_(){}

Polygon::Polygon(const vector<Point>& points):points_(points){}

void Polygon::show() const{
    cout << "{";
    for(const Point &p:points_) p.show();
    cout << "}";
}

bool Polygon::get_vertex(size_t pos, Point& p) const{
    if (pos < 1 || pos > points_.size()) return false;
    p = points_[pos-1];
    return true;
}

void Polygon::add_vertex(size_t pos, const Point& p){
    if (pos < 1 || pos > points_.size()+1) return;
    points_.insert(points_.begin()+pos-1, p);
}

double Polygon::perimeter() const{
    double res=0;
    for(size_t i =0; i<points_.size()-1; i++) res += points_[i].distance(points_[i+1]);
    res += points_[0].distance(points_[points_.size()-1]);
    return res;
}