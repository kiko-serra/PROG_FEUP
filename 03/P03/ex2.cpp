#include <iostream>
using namespace std;

struct fraction {
   int num; // Numerator
   int den; // Denominator
};
fraction sum(const fraction fa[], int n);
int gcd(int a , int b);
void irreductible(int &den, int &num);


int main(){

/*
    fraction fa[] = { {1, 2} } ;
    fraction s = sum(fa, 1);  
    cout << s.num << '/' << s.den << "\n";
    fraction fa[] = { {1, 2}, {-1, 3}};
    fraction s = sum(fa, 2);  
    cout << s.num << '/' << s.den << "\n";
*/
    fraction fa[] ={ {1, 2}, {-1, 3}, {-3, 4} };
    fraction s = sum(fa, 3);  
    cout << s.num << '/' << s.den << "\n";

/*
    fraction fa[] { {-1, 4}, {1, 2}, {-1, 8}, {-1, 8} };
    fraction s = sum(fa, 4);  
    cout << s.num << '/' << s.den << "\n";

    fraction fa[] { {0, 1}, {1, 2}, {-2, 3}, {3, 4}, {-4, 5}};
    fraction s = sum(fa, 5);  
    cout << s.num << '/' << s.den << "\n";
*/
    return 0;
}

fraction sum (const fraction fa[], int n){
    fraction all;
    fraction aux;
    for (int i = 0; i < n; i++)
    {
        if (!i)
        {
            all.den=fa[i].den;
            all.num=fa[i].num;
            continue;
        }
       aux.den = gcd(fa[i].den, all.den);
       aux.den = (fa[i].den * all.den) / aux.den;
       //num3 = (num1)*(den3/den1) + (num2)*(den3/den2);
       aux.num = (fa[i].num * (aux.den/fa[i].den)) + (all.num * (aux.den/all.den));
       irreductible(aux.den, aux.num);
    }
    return aux;
}

int gcd(int a, int b){
    return (!b) ? a : gcd(b, a%b);
}
void irreductible(int &den, int &num)
{
    int common_factor = gcd(num,den);
    den /= common_factor;
    num /= common_factor;
}