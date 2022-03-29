#include <iostream>
using namespace std;
int main()
{
    int a[4] = {0, 1, 2, 3};
    int *b = new int[4]{3, 2, 1, 0};
    int i;
    cin >> i;
    if (--b[a[i]] != 0)
        delete[] b;
    return 0;
}
//nenhum valor de i da memory leak