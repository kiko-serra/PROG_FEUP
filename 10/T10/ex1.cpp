#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <list>
#include <map>

using namespace std;
int main()
{
    multimap<char, int> x{{'X', 1}, {'A', 3}, {'X', 2}, {'B', 4}, {'X', 0}};
    for (auto p : x)
        cout << p.first << '/' << p.second << '|';
    return 0;
}