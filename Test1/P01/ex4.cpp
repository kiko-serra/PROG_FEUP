#include <iostream>
using namespace std;

bool is_prime(int n);
bool isPernicious(int aux);

int main()
{
    int a, b;
    cin >> a >> b;

    for (int i = a; i <= b; i++) if(isPernicious(i) && is_prime(i)) cout << i << endl;
    return 0;
}

bool isPernicious(int aux)
{
    int counter = 0;
    while (aux > 0) {
        counter += aux & 1;
        aux = aux >> 1;
    }
    return is_prime(counter);
}

bool is_prime(int n){
    if (n <= 1) return false;
    int i = 2;
    while (i < n) {
        if (n % i == 0) return false;
        i++;
    }
    return true;
}