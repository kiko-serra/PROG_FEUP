#include<iostream>
using namespace std;


bool is_mersenne_number(unsigned long n);

int main(){
    int a;
    cin >> a;
    cout << is_mersenne_number(a) << endl;
}

bool is_mersenne_number(unsigned long n) {
    if (!n) return false;
    while (n > 0) {
        if (!(n % 2)) return false;
        n /= 2;
    }
    return true;
}