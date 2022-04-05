#include <iostream>
#include<cmath>
using namespace std;

bool anagrams(const char a[], const char b[], int &n);

int main()
{

    return 0;
}
// na primeira string conto cada letra e aumento no vetor
// na segunda string subtraio no vetor
// sao anagrmas se o vetor alfabeto tive tudo a 0
bool anagrams(const char a[], const char b[], int &n){
    int alphabet[26]={0};
    int i = 0;
    while (a[i] != '\0'){
        if ((a[i] >= 'a') && (a[i] <= 'z')) alphabet[a[i] - 'a']++;
        if ((a[i] >= 'A') && (a[i] <= 'Z')) alphabet[a[i] - 'A']++;
        i++;
    }
    i=0;
    while (b[i] != '\0'){
        if ((b[i] >= 'a') && (b[i] <= 'z')) alphabet[b[i] - 'a']--;
        if ((b[i] >= 'A') && (b[i] <= 'Z')) alphabet[b[i] - 'A']--;
        i++;
    }
    int sum = 0;
    for (int i = 0; i < 26; i++) sum += abs(alphabet[i]);
    n = sum;
    return !n;
}