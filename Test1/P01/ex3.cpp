#include<iostream>
using namespace std;

bool is_prime(int n);

int main(){
    int num;
    cin >> num;
    for (int i = 0; i <= num; i++)
    {
        if (is_prime(i)) cout << i << endl;   
    }
    return 0;
}

bool is_prime(int n) {
    if (n <= 1) return false;
    int i = 2; 
    while (i < n) {
      if (n % i == 0) return false;
      i++;
    }
    return true;
}