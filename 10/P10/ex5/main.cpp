#include <iostream>
#include <sstream>
#include <string>
#include <set>
#include "Page.h"
#include "Book.h"
 
using namespace std;

//! Builds "index" for the "words" received as parameter
void Book::build_index(const set<string>& words) {
    for (size_t i = 0; i < book_.size(); i++){
        for (size_t j = 0; j < book_[i].get_num_lines(); j++){
            istringstream iss(book_[i].get_line(j));
            string word;
            while(iss >> word){
                for (string c : words){
                    if (c==word)
                        index_[word].insert(i+1);
                }
            }
        }
    }
}