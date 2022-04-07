#include <iostream>
using namespace std;

int main(){
    int a = 0, b = 1, c = 2;
    int *parr[]{&c, &b, &a, 0, &a};
    for (int *p : parr) if (p != 0) ++*p; // se o apontador nao for 0 aumenta em 1 unidade o valor para o qual o apontador aponta
    cout << a << b << c << endl;
    return 0;
}
