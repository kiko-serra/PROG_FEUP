#include <iostream>
using namespace std;

int adigits(int a, int b, int c);

int main()
{
    cout << adigits(4, 2, 5) << endl;
    cout << adigits(9, 1, 9) << endl;
    cout << adigits(1, 2, 3) << endl;
    cout << adigits(1, 0, 0) << endl;

    return 0;
}

int adigits(int a, int b, int c)
{
    int num = 0;
    int aux;
    int array[3];
    array[0] = a;
    array[1] = b;
    array[2] = c;

    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (array[i] < array[j])
            {
                aux = array[i];
                array[i] = array[j];
                array[j] = aux;
            }
        }
    }
    num = array[0]*100 + array[1]*10 + array[2];
    return num;
}
