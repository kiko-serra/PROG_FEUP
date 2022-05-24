#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <map>
 
using namespace std;

//! print map in one line
void show_map(const map<string, size_t>& count) {
  cout << "[ ";
  for (const auto& e : count)   {
    cout << e.first << ":" << e.second << ' ';
  }
  cout << "]\n";
}

void count_words(const string& str, map<string, size_t>& count){
    string sentence = str;
    string word;
    for(char&c : sentence) c= tolower(c);
    istringstream iss(sentence);
    while(iss >> word){
        count[word]++;
    }
}