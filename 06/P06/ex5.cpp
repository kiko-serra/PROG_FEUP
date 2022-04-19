#include <string>
#include <vector>
#include <iostream>
using namespace std;

struct sm_entry
{
    size_t row;
    size_t col;
    int value;
};

typedef vector<sm_entry> smatrix;

//! Print a sparse matrix.
void print(const smatrix &sm)
{
    cout << "[ ";
    for (sm_entry e : sm)
    {
        cout << '(' << e.row << ", " << e.col << ", " << e.value << ") ";
    }
    cout << "]\n";
}
void sum(const smatrix &a, const smatrix &b, smatrix &r){
    /* if (!a.size()){
        for (size_t i = 0; i < b.size(); i++)
             r.push_back(b[i]);
        return;
    }if (!b.size()){
        for (size_t i = 0; i < a.size(); i++)
            r.push_back(a[i]);
        return;
    } */
    for (size_t i = 0; i < b.size(); i++){
        bool found = false;
        for (size_t j = 0; j < a.size(); j++){
            if (a[j].row == b[i].row && a[j].col == b[i].col){
                found = true;
                r[j].row=a[j].row;
                r[j].col=a[j].col;
                r[j].value = a[j].value + b[i].value;
            }
        }
        if (!found) r.push_back(b[i]);
    }
}