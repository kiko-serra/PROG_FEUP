#include <iostream>
#include <cmath>
#include "Operation.h"

using namespace std;

class Sum : public Operation{
    public:
    int Sum::operation() const override{
    return get_op1() + get_op2();
    }
};

class Power : public Operation{
    public:
    int Power::operation() const override {
    return pow(get_op1(), get_op2());
    }
};