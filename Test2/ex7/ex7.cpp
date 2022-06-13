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
    string line, word;
    wcresult wc{0, 0, 0};
    while(getline(in, line)){
        istringstream iss(line);
        wc.lines++;
        while (iss >> word)
            wc.words++;
        wc.bytes+=line.size()+1;
    }
    return wc;
}