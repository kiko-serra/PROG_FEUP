#include<iostream>
#include<string>
#include<fstream>
using namespace std;

void toUpperFunc(string &word){
    for (char &i : word)
            i = toupper(i);
}
int count(const string &fname, const string &word){
    ifstream in(fname);
    int sum = 0;
    string line;
    string w_copy = word;
    toUpperFunc(w_copy);
    while (in >> line){
        toUpperFunc(line);
        if(line == w_copy)
            sum++;
    }
    return sum;
}
int main(){
    cout << count("ex1_test_a.txt", "THE") << endl;
}