#include <iostream>
using namespace std;

int main(){
    int x = 10;
    int &xRef = x;
    cout << ++x << " - ";
    cout << xRef++ << " - ";
    cout << x << " - " << (x==xRef) << endl;
}