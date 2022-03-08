#include <iostream>
using namespace std;

int fizz(int n);

int main(){
    int n;
    cin >> n;
    fizz(n+1);
    cout << "\n";
    return 0;
}

int fizz(int n){
    for(int i =0; i<n; i++){
        if(i%3 == 0 && i%5 == 0){
            continue;
        }
        if(i%3 == 0){
            cout << "Fizz ";
        }
        else if (i % 5 ==0){
            cout << "Buzz ";
        }
        else{
            cout << i << " ";
        }
    }
    return 0;
}