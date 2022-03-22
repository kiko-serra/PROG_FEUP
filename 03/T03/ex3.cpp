int f(const int a[], int b[])
{
    int c[]{0, 1, 2};

    for (int &v : c)
        v = a[v] + b[v];
    for (int i = 0; i < 3; i++)
        b[i] = c[i];
    return c[0] + c[1] + c[2];
}
int main()
{
}
/*
for (int &v : c)
    v = a[v] + b[v];
for (int i = 0; i < 3; i++)
    a[i] = c[i];

for (int v : b)
    c[0] += v;
for (int &v : c)
    v = b[0];

for (int v : a)
    c[0] += v;
for (int &v : c)
    v = a[0];
    */