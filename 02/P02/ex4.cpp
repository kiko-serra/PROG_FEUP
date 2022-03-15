#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int solve_eq(int a, int b, int c, double& x1, double& x2);

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    double x1, x2;
    int r = solve_eq(a, b, c, x1, x2);
    cout << fixed << setprecision(7) << r << ' ' << x1 << ' ' << x2 << endl;

}

int solve_eq(int a, int b, int c, double& x1, double& x2){
    int delta = b*b - 4*a*c;
    if (delta < 0) {
        x1 = NAN;
        x2 = NAN;
        return 0;
    } else if (!delta) {
        x1 = -b/(2.0*a);
        x2 = NAN;
        return 1;
    
    } else {
        x1 = (-b-sqrt(delta))/(2.0*a);
        x2 = (-b+sqrt(delta))/(2.0*a);
        return 2;
    }
    return 0;
}