#include "Polygon.h"
#include "Point.h"
#include <cmath>

using namespace std;

void Polygon::show(){
    cout << "{";
    for(const Point &p) p.show();
    cout << "}";
}