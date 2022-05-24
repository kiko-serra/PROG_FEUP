#include <iostream>
#include <string>
#include <map>

using namespace std;

unsigned roman_to_arab(const string& roman){
    map<char, unsigned> map_roman = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };
    unsigned arab = 0;
    for(unsigned i = 0; i < roman.size(); i++){
        if(i + 1 < roman.size() && map_roman[roman[i]] < map_roman[roman[i + 1]]){
            arab -= map_roman[roman[i]];
        }else{
            arab += map_roman[roman[i]];
        }
    }
    return arab;
}