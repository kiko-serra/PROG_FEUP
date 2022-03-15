#include <iostream>
using namespace std;

void advance(int delta, int& d, int& m, int& y);
bool bissexto(int& y);
int days_in_month(int m, int y);

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << bissexto(a) << endl;
    return 0;
}

void advance(int delta, int& d, int& m, int& y){
    for (int i = 0; i < delta; i++)
    {
        if (d> days_in_month(m, y))
        {
            if (m=12)
            {
                /* code */
            }
            
            m++;
        }
        
    }
    
}

bool bissexto(int& y){
    if (y % 400 == 0) return true;
  else if (y % 100 == 0) return false;
  else if (y % 4 == 0) return false;
  else return true;
    
}


int days_in_month(int m, int y) {
    int d;
    switch (m) {
      case 2:
        d = bissexto(y) ? 29 : 28; // February
        break;
      case 1: case 3: case 5: 
      case 7: case 8: case 10: 
      case 12:
        d = 31; // Months with 31 days
        break;
      default:
        d = 30; // All other months have 30 days
        break;
    }
    return d;
  }