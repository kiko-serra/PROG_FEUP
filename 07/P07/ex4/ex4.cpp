#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

double average(const string& fname){
    ifstream in(fname);
    double sum = 0, x;
    int count = 0;
    while (!in.eof()){
        if (in >> x){
            sum += x;
            count++;
        }else{
            in.clear();
            in.ignore(1);
        }
    }
    return sum / count;
}
int main(){
    double m = average("ex4_test1.txt"); 
    cout << fixed << setprecision(2) << m << '\n';
    double n = average("ex4_test2.txt");
    cout << fixed << setprecision(2) << n << '\n';
    double t = average("ex4_test3.txt");
    cout << fixed << setprecision(2) << t << '\n';
    return 0;
}