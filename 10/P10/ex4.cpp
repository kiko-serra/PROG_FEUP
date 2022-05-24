#include <vector>
#include <list>
#include <iostream>
#include <sstream>
 
using namespace std;

template <typename Itr> 
string to_string(Itr start, Itr end){
    ostringstream value;
    value << "[ ";
    while(start!= end){
        value << *start << " ";
        start++;
    }
    value << "]";
    return value.str();
}

template <typename Itr, typename T> 
int replace(Itr start, Itr end, const T& a, const T& b){
    int res=0;
    while (start!=end){
        if (*start == a){
            *start = b;
            res++;
        }
        start++;
    }
    return res;
}