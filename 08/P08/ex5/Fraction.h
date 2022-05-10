#include <iostream>
#include <string>
#include <sstream>

class Fraction {
  public:
    // constructors
    Fraction();
    Fraction(int year, int month, int day);
    Fraction(const std::string& year_month_day);
    // accessors
    int get_year() const;
    int get_month() const;
    int get_day() const;
    // other  member functions
    bool is_valid() const;
    void write() const;

  private:
    // compute the number of days of month
    static int num_days(int year, int month);
    // attribute

};