#include "MovingAverage.h"
#include <list>

MovingAverage::MovingAverage(std::size_t n):n_(n){}

void MovingAverage::update(double value){
    if(values_.size()==n_)
        values_.pop_front();
    values_.push_back(value);
}

double MovingAverage::get() const{
    double res=0;
    std::list<double> aux_list;
    for (double c:values_)
        res += c;
    return res / (double)values_.size();
}