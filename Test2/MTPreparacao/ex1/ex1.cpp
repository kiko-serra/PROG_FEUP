#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <cfloat>

using namespace std;

//! Show file name and its contents.
void show_file(const string& file) {
  ifstream in(file);
  cout << "==> " << file << " <==\n";
  for (string line; getline(in, line); ) cout << line << '\n';
}

bool average(const string& input_fname, const string& output_fname){
    ifstream in(input_fname);
    ofstream out(output_fname);
    if(in.fail())
        return false;
    int counter_lines=0;
    string line;
    while(getline(in, line)){
        int counter_values=0;
        double sum=0, value;
        istringstream iss(line);
        while(iss>>value){
            sum += value;
            counter_values++;
        }
        out << fixed << setprecision(3) << sum/counter_values << endl;
        counter_lines++;
    }
    out << "lines=" << counter_lines << endl;
    return true;
}