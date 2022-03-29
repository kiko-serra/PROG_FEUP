#include <iostream>
using namespace std;

int main()
{
    char s[] = "C/C++"; 
    char *p = &s[3];
    *p = 0;
    p--;
    p[0] = '0';
    p[-2] = 'A';
    cout << s;
    return 0;
}