#include "alist.cpp"
#include <iostream>
using namespace std;

void append(alist *a, const alist *b);

int main()
{
    alist *a = empty();
    const alist *b = empty();
    append(a, b);
    print(a);
    destroy(a);
    destroy(b);
}

void append(alist *a, const alist *b)
{
    int new_size = a->size + b->size;
    int *new_elem = new int[new_size];
    for (int i = 0; i < a->size; i++)
    {
        new_elem[i] = a->elements[i];
    }
    for (int i = 0; i < b->size; i++)
    {
        new_elem[i+a->size] = b->elements[i];
    }
    delete [] a->elements;
    a->elements = new_elem;
    a->size = new_size;
}