#ifndef POLYGON_H
#define POLYGON_H

class Polygon{
public:
    Point get_vertex(int pos const);
    void add_vertex(int pos);

    void show();



private:
    vector<Point> points_;
    

};

#endif POLYGON_H