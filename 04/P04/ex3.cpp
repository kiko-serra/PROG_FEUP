#include "dlnode.cpp"
#include <iostream>
using namespace std;

dlnode *insert(dlnode *dln, int k, int v);

int main()
{
    dlnode *dln = build(1, build(2, build(3, build(4))));
    dln = insert(dln, 3, 0);
    print(dln);
    destroy(dln);
}

dlnode *insert(dlnode *dln, int k, int v)
{
    dlnode *curr = dln;
    dlnode *prev = nullptr;
    dlnode *aux = new dlnode;
    aux->value = v;
    aux->prev = nullptr;
    aux->next = nullptr;
    int i = 0;
    if (!k)
    {
        dlnode* new_node={v, nullptr, dln};
        dln->prev=new_node;
    }
    
    while (curr != nullptr && i < k)
    {
        prev = curr;
        curr = curr->next;
        i++;
    }
    if (curr != nullptr)
    {
        if (i == k)
        {
            /*
            if (curr->next == nullptr)
            {
                aux->next = curr->next;
                aux->prev = curr;
                curr->next = aux;
            }*/
            prev->next =  new_node{v, prev, curr};
            curr->prev = prev->next;
        }
    }
    else if(i==k){
        aux->next = curr->next;
        aux->prev = curr;
        curr->next = aux;
    }
    return dln;
}