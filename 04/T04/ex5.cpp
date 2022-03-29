struct node
{
    int value;
    node *next;
};
node *build(int value, node *next) { return new node{value, next}; }
void destroy(node *n)
{
    while (n != nullptr)
    {
        delete n;
        n = n->next;
    }
}
int main()
{
    node *n = build(1, build(2, nullptr));
    destroy(n);
    return 0;
}
