#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    double res = 0;

    for (int i = 0; i <= a; i++) res += pow(-1, i) / (2 * i + 1);
    cout<< fixed << setprecision(b) << 4 * res << endl;
    return 0;
}
