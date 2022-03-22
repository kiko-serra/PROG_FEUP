#include <iostream>
using namespace std;

int f(const char s1[], const char s2[])
{
    int i = 0, j = 0;
    while (s1[i] == s2[j++])
        if (s1[i++] == 0)
            return 0;
    return s1[i] - s2[--j];
}

int main()
{
    cout << f("ABC", "AB") << ' ' << f("AB", "AB") << ' ' << f("ABC", "abc");
    return 0;
}