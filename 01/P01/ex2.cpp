#include <iostream>
using namespace std;

int reverse(int n);

int main(){
    int n;
    cin >> n;
    cout << reverse(n) << "\n";
    return 0;
}

int reverse(int n){
    int aux=0;
    while(n){
        aux+=n%10;
        n /= 10;
        if(!n) break;
        aux *=10;
    }
    return aux;
}