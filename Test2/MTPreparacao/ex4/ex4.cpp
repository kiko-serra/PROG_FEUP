#include <map>
#include <list>
#include <string>
#include <iostream>
#include <climits>
using namespace std;

string cat_keys(list<map<string, unsigned>> lst){
    unsigned min = UINT_MAX;
    map<string, unsigned> aux;
    string result;
    for(auto &m : lst){
        for(auto &entry : m){
            if(entry.second<min){
                min = entry.second;
                aux = m;
            }
        }
    }
    for(auto &entry : aux){
        result += entry.first;
    }
    return result;
}