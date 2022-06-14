#include <iostream>
#include <iomanip>
#include "Piece.h"


using namespace std;

bool Piece::can_be_left_to(const Piece& other) const{
    return right_==other.get_left();
}

bool Piece::can_be_right_to(const Piece& other) const{
    return left_==other.get_right();
}