#ifndef POLYGON_H
#define POLYGON_H
#include "Point.h"
#include <vector>

using namespace std;

class Polygon{
public:
    Polygon();
    Polygon(const vector<Point>& points);
    bool get_vertex(size_t pos, Point& p) const;
    void add_vertex(size_t pos, const Point& p);
    double perimeter() const;
    void show() const;

private:
    vector<Point> points_;
};

#endif