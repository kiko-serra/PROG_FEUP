#include<iostream>
using namespace std;

/*unsigned long bell(unsigned long n);
int main(){
       
}

unsigned long bell(unsigned long n){
    if (n == 0 || n == 1)
    {
        return n;
    }
    else{
        int up = 1;
        int down = 1;
        for (int i = 0; i < n; i++)
        {
            up *= (n-i+1);
            down *= ()
        }
        
    }
}
*/
 
int bellNumber(int n)
{
   int particoes[n][n];
   particoes[0][0] = 1;
   for (int i=1; i<=n; ++i)
   {
       particoes[i][i+1]=0;
   }
   for (int i = 1; i < n; ++i)
   {
       int linha_ant[i-1];
       linha_ant[0]=1;
      for (int j = 1; j < i; ++j)
      {
        linha_ant[j]=particoes[i-1][j];
      }
   }
   
   return particoes[n][0];
}
 
// Driver program
int main()
{
   for (int n=0; n<=5; n++)
      cout << "Bell Number " << n << " is "
           << bellNumber(n) << endl;
   return 0;
}