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
    /*
        dlnode *dln = build(1, build(2, build(3, build(4))));
        dln = insert(dln, 3, 0);
        print(dln);
        destroy(dln);
        */
}

dlnode *insert(dlnode *dln, int k, int v)
{
    dlnode *curr = dln;
    dlnode *prev = nullptr;
    int i = 0;
    if (!k)
    {
        dlnode *new_node = new dlnode {v, nullptr, dln};
        dln->prev = new_node;
    }

    while (curr != nullptr && i < k)
    {
        prev = curr;
        curr = curr->next;
        i++;
    }
    if (curr != nullptr)
    {
        dlnode *new_node2 = new dlnode{v, prev, curr};
        prev->next = new_node2;
        curr->prev = prev->next;
    }
    if (i == k)
    {
        dlnode *new_node3 = new dlnode{v, curr, nullptr};
        curr->next = new_node3;
    }
    return dln;
}