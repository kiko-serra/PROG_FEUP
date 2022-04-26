#include <iostream>
#include <fstream>
#include <sstream>
 
using namespace std;
 
struct wcresult {
  unsigned int lines;
  unsigned int words; 
  unsigned int bytes; 
};


wcresult wc(const string& filename){
  ifstream in(filename);
  wcresult result={0, 0, 0};
  string line, word;
  while (getline(in, line)){
    result.lines++;
    istringstream iss(line);
    while (iss >> word){
      result.words++;
    }
    result.bytes += line.size() + 1;
  }
  return result;
}

int main(){
  wcresult r = wc("ex2_test1.txt");
  cout << r.lines << ' ' << r.words << ' ' << r.bytes << '\n';
}