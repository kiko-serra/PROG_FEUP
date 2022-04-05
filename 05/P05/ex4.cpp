#include <iostream>
using namespace std;

#include <iostream>
using namespace std;
 
//! Complex number
struct complex {
  int real;  // Real part
  int img;   // Imaginary part
};
 
//! Print array of complex numbers.
void print(const complex z[], int n) {
  cout << "[ ";
  for (int i = 0; i < n; i++) {
    if (z[i].real == 0 && z[i].img == 0) 
      cout << 0;
    else {
      if (z[i].real != 0)
        cout << z[i].real;
      if (z[i].img > 0) 
        cout  << '+' << z[i].img << 'i';
      else if (z[i].img < 0) 
        cout  << z[i].img << 'i';
    }
    cout << ' ';
  }
  cout << "]\n";
}

void mandel(complex c, int n, complex z[]){
    z[0]={0,0};
    for (int i = 1; i < n; i++) z[i]= add(mul(z[i-1], z[i-1]), c);
}

complex add(complex num1, complex num2){
    complex sum = {num1.real+num2.real, num1.img+num2.img};
    return sum;
}
complex mul(complex num1, complex num2){
    complex res = {(num1.real*num2.real) - (num1.img*num2.img) , (num1.real*num2.img) + (num1.img*num2.real)};
    return res;
}
