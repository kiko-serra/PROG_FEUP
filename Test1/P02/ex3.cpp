#include <iostream>
using namespace std;

bool is_mersenne_number(unsigned long n);

int main(){
    cout << is_mersenne_number(0) << endl;
    cout << is_mersenne_number(3) << endl;
    cout << is_mersenne_number(4) << endl;
    cout << is_mersenne_number(65535) << endl;
    cout << is_mersenne_number(18446744073709551614UL) << endl;
    return 0;
}

bool is_mersenne_number(unsigned long n){
    if (!n) return false;
    while (n > 0){
        if (!(n % 2))return false;
        n /= 2;
    }return true;
}