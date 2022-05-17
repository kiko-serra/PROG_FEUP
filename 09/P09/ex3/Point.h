#ifndef POINT_H
#define POINT_H


class Point{
public:
    Point();  // 0,0
    Point(int x, int y);

    //accessors
    int x() const;
    int y() const;
    void show() const;
    double distance(Point p1) const;

private:
    int x_, y_;
};

#endif