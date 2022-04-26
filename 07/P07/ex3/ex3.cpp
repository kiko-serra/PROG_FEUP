#include <iostream>
#include <fstream>
#include <sstream>
#include<string>
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
void toUpperFunc(string &word){
    for (char &i : word)
            i = toupper(i);
}

void normalise(const string& input_fname, const string& output_fname){
    ifstream in(input_fname);
    ofstream out(output_fname);
    string line;
    while (getline(in, line)){
        line.erase(0, line.find_first_not_of(' '));
        line.erase(line.find_last_not_of(' ') + 1);
        if (line.empty()) continue;
        toUpperFunc(line);
        out << line << endl;
    }
}

int main(){
    normalise("ex3_test1.txt", "ex3_test1_out.txt");
    print("ex3_test1_out.txt");
}