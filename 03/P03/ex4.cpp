#include <iostream>
using namespace std;

void rleEncode(const char str[], char rle[]);
int length(const char str[]);

int main()
{
    char rle[1] = {-1};
    rleEncode("", rle);
    for (int i = 0; i < 1; i++)
    { 
        cout << rle[i];
    }
    cout << endl;
    /*
        char rle[2 + 1] = {-1, -1, -1};
        rleEncode("a", rle);

        char rle[10 + 1] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
        rleEncode("abcde", rle);


        char rle[9 + 1] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
        rleEncode("aaaaabbbbbbbbbbbcccd", rle);
                    char rle[3 + 1] = {-1, -1, -1, -1};
                    rleEncode("xxxxxxxxxxxxxxxxxxxx", rle);
                    cout << rle << endl;
                    */
    return 0;
}

void rleEncode(const char str[], char rle[])
{
    int tamanho = length(str);
    int aux = 0;
    for (int i = 0; i < tamanho; i++)
    {

        int count = 1;
        while (i < tamanho - 1 && str[i] == str[i + 1])
        {
            count++;
            i++;
        }
        rle[aux++] = '0' + count;
        rle[aux++] = str[i];
        cout << str[i] << count << " " << aux << endl;
    }
}

int length(const char str[])
{
    int l = 0;
    while (str[l] != '\0')
        l++;
    return l;
}