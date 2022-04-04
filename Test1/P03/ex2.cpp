#include <iostream>
using namespace std;

struct fraction
{
    int num; // Numerator
    int den; // Denominator
};

fraction sum(const fraction fa[], int n);

int gcd(int a, int b){
    if(!b) return a;
    return gcd(b, a%b);
}

int main(){
    fraction fa[] { {1, 2}, {-1, 3}};
    fraction s = sum(fa, 2);  
    cout << s.num << '/' << s.den << "\n";
}

fraction sum(const fraction fa[], int n){
    fraction aux = {0,1};
    for (int i = 0; i < n; i++) aux = {(aux.num * fa[i].den + aux.den * fa[i].num), (aux.den * fa[i].den)};
    int diviser = gcd(aux.num, aux.den);
    aux = {aux.num/diviser, aux.den / diviser};
    if (aux.den < 0){
        aux.num*=-1;
        aux.den*=-1;
    }
    return aux;
}