#include <iostream>
using namespace std;

void f(int& x, int& y) { 
    if (x > y) {
        int t = x; x = y; y = t; 
    } 
} 

void f (int& x, int y, int& z) {
     f(x, y); 
     f(y, z); 
     f(x, y); 
} 

int main() {
    int x = 3, y = 1, z = 2;
    f(x, y, z); cout << x << " - " << y << " - " << z << endl;
    return 0;
    } 