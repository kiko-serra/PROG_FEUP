#include <iostream>
using namespace std;

namespace a {
    namespace b {
        int f(int x, int y=1) {
            return x + y; }
    }int f(int x) {
        return x > 1 ? x + 1 : a::b::f(x - 1);
    }
}int g(int x) {
    return x % 3 == 0 ? a::b::f(x, 3) : a::f(x);
} 

int main(){
    cout << g(1) << "-" << g(2) << "-" << g(3) << endl;
}