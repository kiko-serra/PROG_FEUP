#include<iostream>
using namespace std;

int bellNumber(int n);

int main()
{
   for (int n=0; n<=5; n++){
       int res = bellNumber(n);
      cout << "Bell Number " << n << " is "
           << res << endl;
           }
   return 0;
}

int bellNumber(int n)
{
   int particoes[n][n];
   particoes[0][0] = 1;
   for (int a = 0; a < n; a++)
   {
       for (int b = 0; b < n; b++)
       {
           particoes[a][b]=0; // every number in the array is 0
       }
   }
   for (int i = 1; i < n; ++i){
        int linha_ant[i-1];
       if (i==2){
           linha_ant[0]=1; //first line inn triangle =1
       }
      for (int j = 1; j < i; j++){
        linha_ant[j-1]=particoes[i-2][j-1]; // line before equals to particoes[i-1]
        cout << i << "-i " << j << "-j "<< endl;
      }
      for (int k = 0; k < i; k++){
          if (!k)
          {
            particoes[i][k]=linha_ant[i-1]; //first column equals to last column from upper row
          }
          else{
            particoes[i][k]=particoes[i][k-1]+linha_ant[k-1]; // actual number equals number before plus number befor in upper row
          }
           cout << i << "-i " << k << "-k "<< endl;
      }
    }
   return particoes[n-1][0];
}