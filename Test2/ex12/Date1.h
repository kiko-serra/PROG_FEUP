#include <iostream>
#include <iomanip>

//! A simple class Date definition
class Date {
  public:
    // constructors
    Date();
    Date(int year, int month, int day);
    // accessors
    int get_year() const;
    int get_month() const;
    int get_day() const;
    // write the date as "yyyy/mm/dd"
    void write() const; 

  private:
    int year;
    int month;
    int day;
    // compute the number of days of month/year, for internal use only
    static int days_in_month(int year, int month);
};

void Date::write() const {
  std::cout << std::setfill('0')
            << std::setw(4) << year << '/'
            << std::setw(2) << month << '/'
            << std::setw(2) << day;
}