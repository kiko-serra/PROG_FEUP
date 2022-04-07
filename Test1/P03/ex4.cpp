#include<iostream>
using namespace std;

void int_to_str(int n, char str[], int& pos) {
  int d = 0;  // digits used by decimal representation of n
  for (int i = n; i != 0; i = i / 10){
    d++;
  }
  for (int i = d, j = n; i > 0; i--) {
    str[pos + i - 1] = '0' + j % 10;
    j = j / 10;
  }
  pos = pos + d;
}

void rleEncodeAux(int n, char c, char rle[], int& pos) {
  if (n == 0) {
    return;
  }
  int_to_str(n, rle, pos);
  rle[pos] = c;
  pos++;
}

//! RLE-encode a C s-tring.
void rleEncode(const char str[], char rle[]) {
  int i = 0;   // current position in str
  int j = 0;   // current position in rle
  char c = 0;  // current character
  int n = 0;   // occurrences of c
  while (str[i] != '\0') {
    if (str[i] == c) { 
      n++;
    } else {
      rleEncodeAux(n, c, rle, j);
      n = 1;
      c = str[i];
    }
    i++;
  }
  rleEncodeAux(n, c, rle, j);
  rle[j] = '\0';  // null terminator character
}