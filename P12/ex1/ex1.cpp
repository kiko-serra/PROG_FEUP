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
    ifstream in (input_fname);
    ofstream out (output_fname);
    if (in.fail())
        return false;
    string line;
    int lines=0;
    while(getline(in, line)){
        istringstream iss(line);
        double x;
        double sum=0;
        int contador=0;
        while(iss>>x){
            sum +=x;
            contador++;
        }
        out << fixed << setprecision(3) << sum/contador << endl;
        lines++;
    }
    out << "lines=" << lines << endl;
    return true;
}