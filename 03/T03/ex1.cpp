#include <iostream>
using namespace std;

struct data
{
    int x;
    int y;
};
int main()
{
    data a[] {{1, 2}, {3, 4}, {5, 6}} ;
    a[a[1].x - 1].x += a[a[0].x + 1].y ;
    a[a[2].y - a[1].y - a[0].x].y -= a[a[1].x - a[0].y].x ;
    for (data v : a){

        cout << '{' << v.x << ',' << v.y << '}' << endl;
    }
    return 0;
}
// resposta {1,2},{3,1},{11,6}