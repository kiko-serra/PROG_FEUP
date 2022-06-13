#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

//! Show file contents with line number information and 
//! the '|' character indicating the begining and end of lines.
void print(const std::string& file) {
  ifstream in(file);
  size_t line_nr = 1;
  for (string line; getline(in, line);) {
     cout << line_nr << "|" << line << "|\n";
     line_nr++;
  }
}

void toUpperFunc(string& word){
    for(auto &l : word)
        l = toupper(l);
}

void normalise(const string& input_fname, const string& output_fname){
    ifstream in(input_fname);
    ofstream out(output_fname);
    string line, word;
    while(getline(in, line)){
        //apaga todos os espacos antes de comecar a frase
        line.erase(0, line.find_first_not_of(' '));
        //apaga todos os espacos depois de acabar a frase
        line.erase(line.find_last_not_of(' ') +1);
        if(line.empty()) continue;
        toUpperFunc(line);
        out << line << endl;
    }
}