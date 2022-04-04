#include <iostream>
using namespace std;

struct fraction
{
    int num; // Numerator
    int den; // Denominator
};
fraction sum(const fraction fa[], int n);
int gcd(int a, int b);

int main()
{

    /*
        fraction fa[] = { {1, 2} } ;
        fraction s = sum(fa, 1);
        cout << s.num << '/' << s.den << "\n";
        fraction fa[] = { {1, 2}, {-1, 3}};
        fraction s = sum(fa, 2);
        cout << s.num << '/' << s.den << "\n";
    */
    fraction fa[] = {{1, 2}, {-1, 3}, {-3, 4}};
    fraction s = sum(fa, 3);
    cout << s.num << '/' << s.den << "\n";

    /*
        fraction fa[] { {-1, 4}, {1, 2}, {-1, 8}, {-1, 8} };
        fraction s = sum(fa, 4);
        cout << s.num << '/' << s.den << "\n";

        fraction fa[] { {0, 1}, {1, 2}, {-2, 3}, {3, 4}, {-4, 5}};
        fraction s = sum(fa, 5);
        cout << s.num << '/' << s.den << "\n";
    */
    return 0;
}

int gcd(int a, int b)
{
    return (!b) ? a : gcd(b, a % b);
}

fraction sum(const fraction fa[], int n)
{
    fraction r = {0, 1};
    for (int i = 0; i < n; i++)
    {
        r = {(r.num * fa[i].den + fa[i].num * r.den), (fa[i].den * r.den)};
    }
    r = {(r.num / gcd(r.num, r.den)), (r.den / gcd(r.num, r.den))};
    if (r.den < 0)
    {
        r.num *= -1;
        r.den *= -1;
    }
    return r;
}
