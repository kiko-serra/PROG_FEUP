#include <iostream>
using namespace std;

bool isPernicious(int p);
bool isPrime(int num);

int main() {
    int x, y;
    cin >> x >> y;

    for (int z =x ; z <= y; z++)
    {
      if(isPernicious(z) && isPrime(z)) cout << z << endl;
    }
  return 0;
}

bool isPernicious(int p){
  int count = 0;
  while (p > 0)
  {
    count += p & 1;
    p = p >> 1;
  }
  return isPrime(count);
}

bool isPrime(int num){
  if (num <= 1)
      return false;
    int i = 2; 
    while (i < num) {
      if (num % i != 0) {
        i++;
        continue; 
      } 
      return false;
    }
    return true; 
}