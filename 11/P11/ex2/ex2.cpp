#include <cmath>
#include <iostream>
#include <iomanip>
#include "Shape.h"

using namespace std;

class Circle : public Shape{
    public:
    Circle(const point& center, const double radius);
    double area() const;
    double perimeter() const;
    bool contains(const point& p) const;

    private:
    double radius_;
};

Circle::Circle(const point& center, const double radius): Shape(center), radius_(radius) {}

double Circle::area() const{
    return M_PI*pow(radius_, 2);
}

double Circle::perimeter() const{
    return 2*M_PI*radius_;
}

bool Circle::contains(const point& p) const {
    point c= get_center();
    double dx = p.x-c.x;
    double dy = p.y-c.y;
    return pow(dx, 2) + pow(dy, 2) <= radius_*radius_;
}

class Rectangle : public Shape{
    public:
    Rectangle(const point& center, const double width, const double height);
    double area() const;
    double perimeter() const;
    bool contains(const point& p) const;

    private:
    double width_, height_;
};

Rectangle::Rectangle(const point& center, const double width, const double height): Shape(center), width_(width), height_(height){}

double Rectangle::area() const {
    return height_ * width_;
}

double Rectangle::perimeter() const {
    return 2*(height_ + width_);
}

bool Rectangle::contains(const point& p) const{
    point c = get_center();
    return (p.x >= c.x-(width_/2)) && (p.x <= c.x+(width_/2)) && (p.y >= c.y-(height_/2)) && (p.y <= c.y+(height_/2));
}