#include <iostream>
using namespace std;


bool is_prime(int n);
int primes(int n);


int main() {
  int n;
  cin >> n;
  primes(n);
  return 0;
}

// while loop together with continue 
bool is_prime(int n) {
    if (n <= 1)
      return false;
    int i = 2; 
    while (i < n) {
      if (n % i != 0) {
        i++;
        continue; 
      } 
      return false;
    }
    return true; 
}

int primes(int max){
    for (int n = 1; n <= max; n++) {
        if (is_prime(n)) {
        cout << n << "\n";
        }
    } 
    return 0;
}