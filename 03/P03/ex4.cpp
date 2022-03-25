#include <iostream>
using namespace std;

void rleEncode(const char str[], char rle[]);
int length(const char str[]) ;

int main()
{
    /*
    char rle[1] = {-1};
    rleEncode("", rle);
    cout << rle << endl;
*/
    char rle[2 + 1] = {-1, -1, -1};
    rleEncode("a", rle);
    cout << rle << endl;
/*
    char rle[10 + 1] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    rleEncode("abcde", rle);
    cout << rle << endl;

    char rle[9 + 1] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    rleEncode("aaaaabbbbbbbbbbbcccd", rle);
    cout << rle << endl;

    char rle[3 + 1] = {-1, -1, -1, -1};
    rleEncode("xxxxxxxxxxxxxxxxxxxx", rle);
    cout << rle << endl;
    */
}

void rleEncode(const char str[], char rle[]){
    int tamanho = length(str);
    for (int i = 0; i < tamanho; i++) {

        int count = 1;
        while (i < tamanho - 1 && str[i] == str[i + 1]) {
            count++;
            i++;
        }
 
        // Print character and its count
        cout << str[i] << count;
    }
    
}

int length(const char str[]) {
  int l = 0;
  while (str[l] != '\0') 
    l++;
  return l;
}