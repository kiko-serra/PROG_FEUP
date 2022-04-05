#include<iostream>
using namespace std;

void evaluate(const char in);

int main(){
    char in;
    cin >> in;
    evaluate(in);
    return 0;
}
void evaluate(char in){
    if (((in >= 'a') && (in <= 'z')) || ((in >= 'A') && (in <= 'Z'))) cout << "LETTER" << endl;
    else if ((in >= '0') && (in <= '9')) cout << "DIGIT" << endl;
    else cout << "OTHER" << endl;   
}