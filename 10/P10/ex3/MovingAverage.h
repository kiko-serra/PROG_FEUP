#ifndef MOVINGAVERAGE_H
#define MOVINGAVERAGE_H

#include <list>

class MovingAverage {
public:
  MovingAverage(std::size_t n); 
  void update(double value);
  double get() const;
private:
  std::size_t n_;
  std::list<double> values_;
};

#endif