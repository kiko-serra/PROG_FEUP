#include <string>
#include <vector>
#include <iostream>
using namespace std;
string longest_prefix(const vector<string>& v){
    string prefix=v[0];
    for(size_t i = 1; i < v.size(); i++){
        for(size_t j = 0; j < v[i].length(); j++)
            if(prefix[j]!=v[i][j]) prefix=prefix.substr(0, j);
    }
    return prefix;
}