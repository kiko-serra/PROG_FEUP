#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;
int main(){
    istringstream in("0 there is a 1 2 cat in the house3");
    int n = 0;
    while (!in.eof()){
        int x;
        if (in >> x) n++;
        else{
            in.clear();
            in.ignore(1);
        }
    }
    cout << n << endl;
}