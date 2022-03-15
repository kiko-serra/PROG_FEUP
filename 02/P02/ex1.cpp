#include <iostream>
using namespace std;

int adigits(int x, int y, int z);

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    cout << adigits(a, b, c) << endl;
    return 0;
}

int adigits(int x, int y, int z){
    int res;
    int v[3];
    v[0]=x; v[1]=y; v[2]=z;
    for (int i = 0; i < 3; i++)
    {
        for (int j = i+1; j < 3; j++)
        {
            if(v[j]>v[i]){
                int aux = v[j];
                v[j]=v[i];
                v[i]=aux;
            }
        }
    }
    res = v[0]*100 + v[1]*10 + v[2];
    return res;
}