#include<iostream>
#include<string>
using namespace std;

bool pangram(const string& s, string& m){
char alphabet[26]{0};
int flag=0;
for(size_t i=0; i <s.length();i++){
    if (s.at(i)>='a' && s.at(i)<='z') alphabet[s.at(i)-'a']++;
    if (s.at(i)>='A' && s.at(i)<='Z') alphabet[s.at(i)-'A']++;
}
for (int i = 0; i < 26; i++){
    if (!alphabet[i]){
        m.push_back(i+'a');
        flag++;
    }
}
return !flag;
}