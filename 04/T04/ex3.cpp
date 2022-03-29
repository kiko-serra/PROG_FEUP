#include <iostream>
using namespace std;
int main()
{
    int *a = new int[3]{3, 2, 1};
    int *p = a;
    while (*p != 0)
    {
        p++;
    }
    cout << *p;
    delete[] a;
    return 0;
}
//buffer overflow pq como o valor destes numeros é sempre diferente de 0 o apontador vai ser incrementado ate apontar
//para a posicao 4 no vetor a. essa posicao nao existe