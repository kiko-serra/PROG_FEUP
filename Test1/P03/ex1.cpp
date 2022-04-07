#include<iostream>
using namespace std;

unsigned long hstr_to_integer(const char hstr[]);

int main(){


    return 0;
}
unsigned long hstr_to_integer(const char hstr[]){
    int i=0;
    unsigned long res=0;
    while (hstr[i] != '\0'){
        char c = hstr[i];
        int v = 0;
        if (c >= 'a' && c <= 'z') v = c - 'a' + 10;
        else if (c >= 'A' && c <= 'Z') v = c - 'A' + 10;
        else if (c >= '0' && c <= '9') v = c - '0';
        res = res * 16 + v;
        i++;
    }
    return res;
}