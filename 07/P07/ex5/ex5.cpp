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
    vector<double> v;
    for (string line; getline(in, line); ) {
        istringstream iss(line);
        double n;
        if (line[0]== '#') continue;
        string id;
        iss >> id;
        while (iss >> n) v.push_back(n);
        sort(v.begin(), v.end());
        int n_elements = v.size();
        int n_medians = n_elements / 2;
        if (n_elements % 2 == 0)
            out << id << ' '<< fixed << setprecision(1) << 0.5 * (v[n_medians - 1] + v[n_medians]) << endl;
        else
            out << id << ' '<< fixed << setprecision(1) << v[n_medians] << endl;
        v.clear();
    }
}