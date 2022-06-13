#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

void toUpper(string &word){
    for(auto &l : word){
        l = toupper(l);
    }
}
int count(const string& fname, const string& word){
    ifstream in(fname);
    string line, word_cp, single;
    word_cp=word;
    toUpper(word_cp);
    int sum=0;
    while(getline(in, line)){
        istringstream iss(line);
        while(iss >> single){
            toUpper(single);
            if(single == word_cp)
                sum ++;
        }
    }
    return sum;
}