#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

class Date {
  public:
    // constructors
    Date();
    Date(int year, int month, int day);
    Date(const std::string& year_month_day);
    // accessors
    int get_year() const;
    int get_month() const;
    int get_day() const;
    // tests date validity
    bool is_valid() const;
    // write the date as "yyyy/mm/dd"
    void write() const;

  private:
    int year;
    int month;
    int day;
    // Compute the number of days of month
    static int num_days(int year, int month);
};

Date::Date():year(1), month(1), day(1){}

Date::Date(int year, int month, int day){
    if (year<1 || year>9999 || month < 1 || month > 12 || day>num_days(year, month) || day<1){
        this->year=0;
        this->month=0;
        this->day=0;
    }else{
        this->year=year;
        this->month=month;
        this->day=day;
    }  
}

Date::Date(const std::string& year_month_day){
    int y, m, d;
    char s1, s2;
    std::stringstream iss(year_month_day);
    iss >> y >> s1 >> m >> s2 >> d;
    if (s1!='/' || y<1 || y>9999 || m < 1 || m > 12 || d>num_days(y, m) || d<1){
        year=0;
        month=0;
        day=0;
    }else{
        year=y;
        month=m;
        day=d;
    }
}
int Date::num_days(int year, int month){
    int n_days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  if (month == 2 && year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
    return 29;
  return n_days[month - 1];
}

bool Date::is_valid() const{
    if (year==0 || month==0 || day==0)
        return false;
    return true;    
}

int Date::get_year() const {
  return year;
}

int Date::get_month() const {
  return month;
}

int Date::get_day() const {
  return day;
}

void Date::write() const {
  std::cout << std::setfill('0')
            << std::setw(4) << year << '/'
            << std::setw(2) << month << '/'
            << std::setw(2) << day;
