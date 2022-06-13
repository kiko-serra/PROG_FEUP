#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

double average(const string& fname){
    ifstream in(fname);
    double number, sum=0;
    int counter=0;
    while(!in.eof()){
        if(in>> number){
            sum += number;
            counter++;
        }
        else{
            in.clear();
            in.ignore(1);
        }
    }
    return sum/counter;
}