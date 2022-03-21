#include<iostream>
using namespace std;

unsigned long bell(unsigned long n);

int main()
{
   for (unsigned long n=0; n<=5; n++){
       unsigned long res = bell(n);
      cout << "Bell Number " << n << " is "
           << res << endl;
           }
   return 0;
}
/*
solution with arrays
unsigned long bell(unsigned long n) {
   unsigned long bell_triangle[n+1][n+1];
   bell_triangle[0][0] = 1;
   for (unsigned long i=1; i<=n; i++) {
      bell_triangle[i][0] = bell_triangle[i-1][i-1];
      for (unsigned long j=1; j<=i; j++)
      bell_triangle[i][j] = bell_triangle[i-1][j-1] + bell_triangle[i][j-1];
   }
   return bell_triangle[n][0];
}
*/
//solution with recursive
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