#include <iostream>
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
    // other  member functions
    bool is_valid() const;
    void write() const;

  private:
    // compute the number of days of month
    static int num_days(int year, int month);
    // attribute
    std::string yyyymmdd;
};

Date::Date(){
    yyyymmdd="00010101";
}

Date::Date(int year, int month, int day){
    if (year<1 || year>9999 || month < 1 || month > 12 || day>num_days(year, month) || day<1){
        yyyymmdd="00000000";
    }else{
        std::stringstream oss;
        oss<<std::setfill('0')<<std::setw(8);
        oss<<std::setw(4)<<year<<std::setw(2)<<month<<std::setw(2)<<day;
        yyyymmdd=oss.str();
    }  
}

Date::Date(const std::string& year_month_day){
    int y, m, d;
    char s1, s2;
    std::stringstream iss(year_month_day);
    iss >> y >> s1 >> m >> s2 >> d;
    if (s1!='/' || y<1 || y>9999 || m < 1 || m > 12 || d>num_days(y, m) || d<1){
        yyyymmdd="00000000";
    }else{
        std::stringstream oss;
        oss<<std::setfill('0')<<std::setw(8);
        oss<<std::setw(4)<<y<<std::setw(2)<<m<<std::setw(2)<<d;
        yyyymmdd=oss.str();
    }
}
int Date::num_days(int year, int month){
    int n_days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  if (month == 2 && year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
    return 29;
  return n_days[month - 1];
}

bool Date::is_valid() const{
    if (this->get_year()==0 || this->get_month()==0 || this->get_day()==0)
        return false;
    return true;    
}

int Date::get_year() const {
  return std::stoi(yyyymmdd.substr(0, 4));
}

int Date::get_month() const {
  return std::stoi(yyyymmdd.substr(4, 2));
}

int Date::get_day() const {
  return std::stoi(yyyymmdd.substr(6, 2));
}

void Date::write() const {
  std::cout << yyyymmdd.substr(0, 4) << '/'
            << yyyymmdd.substr(4, 2) << '/'
            << yyyymmdd.substr(6, 2);
}