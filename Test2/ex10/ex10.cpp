#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

//! Show file name and the contents.
void show_file(const string& file) {
  ifstream in(file);
  cout << "==> " << file << " <==\n";
  for (string line; getline(in, line); ) cout << line << '\n';
}

void calc_medians(const string& input_fname, const string& output_fname){
    ifstream in(input_fname);
    ofstream out(output_fname);
    double x;
    vector<double> median;
    string line, identifier;
    while(getline(in, line)){
        if(line[0]=='#') continue;
        istringstream iss(line);
        iss >> identifier;
        while(iss >> x)
            median.push_back(x);
        sort(median.begin(), median.end());    
        if(!(median.size() % 2))
            out << identifier << ' ' << fixed << setprecision(1) << 0.5 * (median[(median.size() / 2) - 1] + median[median.size()/2]);
        else
            out << identifier << ' ' << fixed << setprecision(1) << median[median.size()/2];
        out << endl;
        median.clear();
    }
}