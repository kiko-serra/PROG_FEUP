#include <string>
#include <vector>
#include <iostream>
using namespace std;

string longest_prefix(const vector<string>& v){
    string res = v[0];
    for (size_t i = 1; i < v.size(); i++){
        string aux = v[i];
        //Decide what is the smallest word between the two we're comparing
        size_t size = aux.size() < res.size() ? aux.size() : res.size();
        for (size_t j = 0; j < size; j++){
            if(res[j] != aux[j]) res = res.substr(0, j);
        }
    }
    return res;
}