#include <iostream>
#include "node.cpp"
using namespace std;

node *reverse(const node *n);

int main(){
    node* a = build(1, nullptr);
    node* b = reverse(a);
    print(b);
    destroy(a);
    destroy(b);
}


node *reverse(const node *n){
    if (n == nullptr) return nullptr;
    node *reversed = new node{n->value, nullptr, nullptr};
    while (n->next != nullptr){
        n = n->next;
        reversed->prev = new node{n->value, nullptr, reversed};
        reversed = reversed->prev;
    }
    return reversed;
}
