#include<iostream>
using namespace std;

void merge_arrays(const int a[], int na, const int b[], int nb, int c[]);

int main(){


    return 0;
}

void merge_arrays(const int a[], int na, const int b[], int nb, int c[]){
    for (int i = 0; i < na; i++) c[i]=a[i];
    for (int i = 0; i < nb; i++) c[i+na]=b[i];
    for (int i = 0; i < (na+nb)/2; i++){
        if (c[i]>c[na+nb-i-1]) {
            int temp = c[i];
            c[i] = c[na+nb-i-1];
            c[na+nb-i-1]=temp;
        }
    }
}