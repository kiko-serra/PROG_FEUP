#include <string>
#include <vector>
#include <iostream>
using namespace std;

struct sm_entry {
  size_t row;
  size_t col;
  int value;
};

typedef vector<sm_entry> smatrix;

//! Print a sparse matrix.
void print(const smatrix& sm) {
  cout << "[ ";
  for (sm_entry e : sm) {
    cout << '(' << e.row << ", " << e.col << ", " << e.value << ") ";
  }
  cout << "]\n";
}
void sum(const smatrix& a, const smatrix& b, smatrix& r){
    if(!a.size()){
        for(size_t i = 0; i<b.size(); i++)
            r.push_back(b[i]);
    }
    if(!b.size()){
        for(size_t i = 0; i<a.size(); i++)
            r.push_back(a[i]);
    }
    for(size_t i = 0; i < a.size(); i++){
        r[i].row = a[i].row;
        r[i].col = a[i].col;
        r[i].value = a[i].value + b[i].value;
    }
}