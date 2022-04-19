#include <string>
#include <vector>
#include <iostream>
using namespace std;
 
//! Print vector of strings.
void print(const vector<string>& v) {
  cout << "[ ";
  for (size_t i = 0; i < v.size(); i++) {
    cout << '\"' << v[i] << "\" ";
  }
  cout << "]\n";
}
void split(const string& s, vector<string>& v){
    for (size_t i = 0; i < s.length(); i++){
        if(s[i]!= ' '){
            size_t pos = s.find(' ', i);
            if(pos != string::npos){
                v.push_back(s.substr(i,pos-i));
                i=pos;
            }
            else {
                v.push_back(s.substr(i,s.length()-i));
                i=s.length();
            }
        }
    }
}