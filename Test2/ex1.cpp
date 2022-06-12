#include <string>
using namespace std;

bool pangram(const string& s, string& m){
    char alphabet[26]{0};
    int flag=0;
    for (size_t i = 0; i < s.length(); i++){
        if(s[i] >= 'a' && s[i]<='z') alphabet[s[i]-'a']++;
        if(s[i] >= 'A' && s[i]<='Z') alphabet[s[i]-'A']++;
    }
    for (int i = 0; i < 26; i++){
      if(!alphabet[i]){
        m.push_back(i+'a');
        flag++;
      }
    }
    return !flag;
}