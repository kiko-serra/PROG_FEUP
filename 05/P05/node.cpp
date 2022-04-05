#include <iostream>
using namespace std;

//! Doubly-linked node containing an int value.
struct node {
  int value;     // Value.
  node* prev;  // Previous node.
  node* next;  // Next node.
};

//! Builds a new node containing value v followed by next.
node* build(int v, node* next=nullptr) {
  node* n = new node { v , nullptr, next };
  if (next != nullptr) { next->prev = n; }
  return n;
}

//! Releases the memory allocated to n and successors.
void destroy(node* n) {
  while (n != nullptr) {
    node* aux = n -> next;
    delete n;
    n = aux;
  }
}

//! Prints 
void print(const node* n) {
  while (n != nullptr) {
    cout << "(";
    if (n->prev == nullptr) cout << "\\<";
    else cout << n->prev->value << '<';
    cout << n->value << '<';
    if (n->next == nullptr) cout << "\\)";
    else cout << n->next->value << ')';
    n = n->next;
  }
  cout << '\n';
}
