#include "node.cpp"
#include <iostream>
using namespace std;

node *remove(int x, node *n);

int main()
{
    node *n = build(1, build(2, build(3, build(4, nullptr))));
    n = remove(1, n);
    print(n);
    destroy(n);
}

node *remove(int x, node *n)
{
    node *curr = n;
    node *prev = nullptr;
    while (curr != nullptr && curr->value != x)
    {
        prev = curr;
        curr = curr->next;
    }
    if (curr != nullptr)
    {
        if (prev == nullptr)
            n = n->next;
        else
            prev->next = curr->next;
        delete curr;
    }
    return n;
}