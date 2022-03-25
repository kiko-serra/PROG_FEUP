#include <iostream>
using namespace std;

void merge_arrays(const int a[], int na, const int b[], int nb, int c[]);
void print_array(int a[], int n);

int main()
{
    const int NA = 4, NB = 6;
    int a[NA] = {1, 2, 4, 7};
    int b[NB] = {0, 3, 5, 6, 8, 9};
    int c[NA + NB];
    merge_arrays(a, NA, b, NB, c);
    print_array(c, NA + NB);
}

void merge_arrays(const int a[], int na, const int b[], int nb, int c[])
{
    int aux[na + nb];
    for (int i = 0; i < na; i++)
        aux[i] = a[i];
    for (int i = 0; i < nb; i++)
        aux[i + na] = b[i];
    int min, min_pos;

    for (int i = 0; i < na + nb; i++)
    {
        for (int j = 0; j < na + nb; j++)
        {
            if (!j || aux[j] < min)
            {
                min = aux[j];
                min_pos = j;
            }
        }
        c[i] = aux[min_pos];
        aux[min_pos] = INT_MAX;
    }
}

// Auxiliary function to print n elements of an array.
void print_array(int a[], int n)
{
    cout << '[' << a[0];
    for (int i = 1; i < n; i++)
    {
        cout << ',' << a[i];
    }
    cout << "]\n";
}