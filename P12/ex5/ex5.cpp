#include <iostream>
#include <cmath>
#include "Operation.h"
using namespace std;

class Sum : public Operation{
    public:
    Sum(int op1, int op2) : Operation(op1, op2){};
    int operation() const {
        return get_op1() + get_op2();
    }
};

class Power : public Operation {
    public:
    Power(int op1, int op2) : Operation(op1, op2){};
    int operation() const {
        return pow(get_op1(), get_op2());
    }
};