#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double series(int n);

int main() {
    int k, d;
    cin >> k >> d;
    cout << fixed << setprecision(d) << 4 * series(k) << endl;
  return 0;
}

double series(int n){
    double count=0;
    for (int i = 0; i <= n; i++)
    {
        count += pow(-1, i)/(2*i + 1);
    }
    return count;
}