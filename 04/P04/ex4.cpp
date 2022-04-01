#include "etree.cpp"
#include <iostream>

using namespace std;

int eval(const etree *t);

int main()
{
    etree *et = add(number(2), sub(number(2), mul(number(2), div(number(2), number(1)))));
    int v = eval(et);
    cout << v << '\n';
    destroy(et);

    return 0;
}

int eval(const etree *t)
{
    if (t == nullptr)return 0;
    switch (t->value){
    case ADD:return eval(t->left) + eval(t->right);
    case SUB:return eval(t->left) - eval(t->right);
    case MUL:return eval(t->left) * eval(t->right);
    case DIV:return eval(t->left) / eval(t->right);
    default:return t->value;
    }
}