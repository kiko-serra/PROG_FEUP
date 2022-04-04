#include <iostream>
using namespace std;

unsigned long hstr_to_integer(const char hstr[]);

int main()
{
    cout << hstr_to_integer("0") << endl;
    cout << hstr_to_integer("A") << endl;
    cout << hstr_to_integer("19") << endl;
    cout << hstr_to_integer("fF") << endl;
    cout << hstr_to_integer("CafeBabe2022") << endl;
    return 0;
}

unsigned long hstr_to_integer(const char hstr[]){
    unsigned long res=0;
    int i=0;
    while (hstr[i] != '\0'){
        char c = hstr[i];
        int v;
        if (c >= 'A' && c <= 'F')
            v = c - 'A' + 10;
        else if (c >= 'a' && c <= 'f')
            v = c - 'a' + 10;
        else if (c >= '0' && c <= '9')
            v = c - '0';
        res = res * 16 + v;
        i++;
    }return res;
}