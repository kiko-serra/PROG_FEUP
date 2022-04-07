#include<iostream>
using namespace std;
int main (){

    int a = 1, b = 2, c = 3;
    int *p = &a, *q = &b;
    cout << p << ' ' << q << ' ' << a << ' ' << b << ' '<< endl;
    *p=*q; // valor para onde p aponta passa a ser igual ao valor para onde q aponta
    cout << p << ' ' << q << ' ' << a << ' ' << b << ' '<< endl;
    q=p; //q passa a apontar para o mesmo sitio de p
    cout << p << ' ' << q << ' ' << a << ' ' << b << ' '<< endl;
    *q-=c; // a = a - c (-1)
    cout << p << ' ' << q << ' ' << a << ' ' << b << ' '<< endl;
    c+=*p; // c = c + (-1) -> (2)
    cout << a << ' ' << b << ' ' << c << endl;
    return 0;
}
//servico de estomatologia 