#include <iostream>
#include <iomanip>
#include <sstream>

#include "Date2.h"

using namespace std;

Date::Date() : year(1), month(1), day(1) {}

Date::Date(int year, int month, int day){
    if (year < 1 || year > 9999 || month < 1 || month > 12 || day > Date::num_days(year, month) || day < 1){
        this->year = 0;
        this->month = 0;
        this->day = 0;
    }else{
        this->year = year;
        this->month = month;
        this->day = day;
    }
}

Date::Date(const string &year_month_day){
    stringstream iss(year_month_day);
    int x, y, z;
    char s1, s2;
    iss >> x >> s1 >> y >> s2 >> z;
    if (s1 != '/' || s2 != '/' || x < 1 || x > 9999 || y < 1 || y > 12 || z > num_days(x, y) || z < 1){
        year = 0;
        month = 0;
        day = 0;
    }else{
        year = x;
        month = y;
        day = z;
    }
}

int Date::get_year() const{
    return year;
}

int Date::get_month() const{
    return month;
}

int Date::get_day() const{
    return day;
}

bool Date::is_valid() const{
    return (!year || !month || !day) ? false : true;
}

int Date::num_days(int year, int month){
    int n_days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
        return 29;
    return n_days[month - 1];
}