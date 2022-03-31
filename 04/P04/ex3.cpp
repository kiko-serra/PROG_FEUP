#include "dlnode.cpp"
#include <iostream>
using namespace std;

dlnode *insert(dlnode *dln, int k, int v);

int main()
{
    dlnode *dln = nullptr;
    dln = insert(dln, 0, 0);
    print(dln);
    destroy(dln);

    dlnode *dln1 = build(1, build(2, build(3, build(4))));
    dln1 = insert(dln1, 3, 0);
    print(dln1);
    destroy(dln1);

    dlnode *dln2 = build(1, build(2));
    dln2 = insert(dln2, 1, 0);
    print(dln2);
    destroy(dln2);

    dlnode *dln3 = build(1, build(2));
    dln3 = insert(dln3, 2, 0);
    print(dln3);
    destroy(dln3);

    dlnode *dln4 = build(1, build(2, build(3, build(4))));
    dln4 = insert(dln4, 3, 0);
    print(dln4);
    destroy(dln4);
}

dlnode *insert(dlnode *dln, int k, int v)
{
    dlnode *curr = dln;
    dlnode *prev = nullptr;
    int i = 0;
    if (dln == nullptr)
        return new dlnode{v, nullptr, curr};

    if (!k)
    {
        dlnode *new_node = new dlnode{v, nullptr, dln};
        curr->prev = new_node;
        return new_node;
    }

    while (curr->next != nullptr && i != k)
    {
        prev = curr;
        curr = curr->next;
        i++;
    }
    if (curr->next == nullptr && i < k)
    {
        dlnode *new_node3 = new dlnode{v, curr, nullptr};
        curr->next = new_node3;
        return dln;
    }
    dlnode *new_node2 = new dlnode{v, prev, curr};
    prev->next = new_node2;
    curr->prev = prev->next;

    return dln;
}