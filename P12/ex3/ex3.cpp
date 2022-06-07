#include <iostream>
#include <iomanip>
#include "Piece.h"
#include "Domino.h"

using namespace std;

bool Piece::can_be_left_to(const Piece& other) const{
    return other.get_left() == right_;
}

bool Piece::can_be_right_to(const Piece& other) const{
    return other.get_right()==left_;
}

const Piece& Domino::left() const {
    return pieces_.front();
}

const Piece& Domino::right() const{
    return pieces_.back();
}

bool Domino::place_left(const Piece& p){
    if(!p.can_be_left_to(this->left()))
        return false;
    pieces_.push_front(p);
    return true;
}

bool Domino::place_right(const Piece& p){
    if(!p.can_be_right_to(this->right()))
        return false;
    pieces_.push_back(p);
    return true;
}