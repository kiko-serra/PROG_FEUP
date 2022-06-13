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


void sum(const smatrix &a, const smatrix &b, smatrix &r){
    r.clear();
    size_t i = 0, j = 0;
    while (i < a.size() && j < b.size()){
        if (a[i].row == b[j].row && a[i].col == b[j].col){
            sm_entry e;
            e.row = a[i].row;
            e.col = a[i].col;
            e.value = a[i].value + b[j].value;
            if(e.value != 0) r.push_back(e);
            i++;
            j++;
        }else if (a[i].row < b[j].row || (a[i].row == b[j].row && a[i].col < b[j].col)){
            sm_entry e;
            e.row = a[i].row;
            e.col = a[i].col;
            e.value = a[i].value;
            if(e.value != 0) r.push_back(e);
            i++;
        }else{
            sm_entry e;
            e.row = b[j].row;
            e.col = b[j].col;
            e.value = b[j].value;
            r.push_back(e);
            j++;
        }
    }
    while (i < a.size()){
        sm_entry e;
        e.row = a[i].row;
        e.col = a[i].col;
        e.value = a[i].value;
        r.push_back(e);
        i++;
    }
    while (j < b.size()){
        sm_entry e;
        e.row = b[j].row;
        e.col = b[j].col;
        e.value = b[j].value;
        r.push_back(e);
        j++;
    }
}