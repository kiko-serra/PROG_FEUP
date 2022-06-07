#include <map>
#include <list>
#include <string>
#include <iostream>
#include <climits>
using namespace std;

string cat_keys(list<map<string, unsigned>> lst){
    unsigned int min = UINT32_MAX;
    map<string, unsigned> aux;
    string res;
    for(auto& l : lst){
        for(auto& m : l){
            if(m.second< min){
                min = m.second;
                aux = l;
            } 
        }
    }
    for(auto &k : aux){
       res +=k.first; 
    }
    return res;
}