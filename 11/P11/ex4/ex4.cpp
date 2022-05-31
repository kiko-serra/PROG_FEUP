#include <iostream>
#include <vector>
#include "Figure.h"
 
using namespace std;

class Rectangle : public Figure{
    public:
    Rectangle(double x_center, double y_center, double width, double height);
    void draw() const;

    private:
    double width_, height_;
};


class Circle : public Figure{
    public:
    Circle(double x_center, double y_center, double radius);
    void draw() const;

    private:
    double radius_;
};

Rectangle::Rectangle(double x_center, double y_center, double width, double height): Figure(x_center, y_center), width_(width), height_(height) {}

void Rectangle::draw() const{
    cout << "R(" << x_center_ << "," << y_center_ << ")(" << width_ << "," << height_ << ")";
}

Circle::Circle(double x_center, double y_center, double radius): Figure(x_center, y_center), radius_(radius){}

void Circle::draw() const{
    cout << "C(" <<x_center_ << "," << y_center_ << ")(" << radius_ << ")";
}