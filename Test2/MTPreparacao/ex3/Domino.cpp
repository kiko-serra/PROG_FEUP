#include <iostream>
#include <iomanip>
#include "Domino.h"

using namespace std;

const Piece& Domino::left() const{
    return pieces_.front();
}

const Piece& Domino::right() const{
    return pieces_.back();
}

bool Domino::place_left(const Piece& p){
    if(!this->left().can_be_right_to(p))
        return false;
    pieces_.push_front(p);
    return true;
}

bool Domino::place_right(const Piece& p){
    if(!this->right().can_be_left_to(p))
        return false;
    pieces_.push_back(p);
    return true;
}