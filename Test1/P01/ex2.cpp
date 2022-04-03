#include <iostream>
using namespace std;

int reverse(int num);

int main(){
    int number;
    cin >> number;
    cout << reverse(number) << endl;
    return 0;
}
    

int reverse(int num){
    int aux = 0;
    while (num != 0)
    {
        aux = aux * 10 + num % 10;
        num /= 10;
    }
    return aux;
}