#include <iostream>
using namespace std;

int main(){
    int number;
    cin >> number;
    for(int i = 0; i <= number; i++){
        if (!(i % 3) && !(i%5)) continue;
        else if (!(i % 3)) cout << "Fizz ";
        else if (!(i % 5)) cout << "Buzz ";
        else cout << i << " ";
    }
    cout << endl;
    return 0;
}