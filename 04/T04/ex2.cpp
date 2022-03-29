#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 1, c = 2;
    int *parr[]{&c, &b, &a, 0, &a};
    for (int *p : parr)
    {
        if (p != 0)
            ++*p;
    }
    cout << a << b << c;
    return 0;
}
