#include <iostream>
using namespace std;

struct data
{
    long a;
    int b[3];
    char c[12];
};

int main(){
    data v[4];
    cout << sizeof(v) << endl;
}