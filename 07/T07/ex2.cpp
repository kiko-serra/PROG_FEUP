#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;
int main(){
    istringstream in(" Curiosity killed the cat ");
    string s;
    cout << "\"";
    while (in >> s)
        cout << s;
    cout << "\"\n";
}