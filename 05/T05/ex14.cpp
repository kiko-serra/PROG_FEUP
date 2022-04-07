#include<iostream>
using namespace std;


int main(){
    int a =0;
    while (true){
        if(a*a >16) break;
        switch (a%3){
        case 0:
            a++;
            cout << a << endl;
            break;
        case 1:
            a+=2;
            cout << a << endl;
        default:
            a++;
            cout << a << endl;
        }
    }
    cout << a << endl;
    return 0;
}