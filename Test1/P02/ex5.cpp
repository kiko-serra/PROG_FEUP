#include <iostream>
using namespace std;

unsigned long bell(unsigned long n);
unsigned long quo(unsigned long n, unsigned long k);

int main(){
    cout << bell(0) << endl;
    cout << bell(1) << endl;
    cout << bell(2) << endl;
    cout << bell(3) << endl;
    cout << bell(4) << endl;
    return 0;
}
unsigned long quo(unsigned long n, unsigned long k) {
    if (k == 0 || k == n)return 1;
    return quo(n - 1, k - 1) + quo(n - 1, k);
}

unsigned long bell(unsigned long n) {
   if (n <= 1)return 1;
   unsigned long res = 0;
   for (unsigned long k = 0; k <= n - 1; k++) res += (quo(n-1, k) * bell(k));
   return res;
}
