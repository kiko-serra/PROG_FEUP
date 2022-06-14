#include "Date.h"
#include <iostream>

Date::Date(): year_(1), month_(1), day_(1){}

Date::Date(int year, int month, int day): year_(year), month_(month), day_(day){}

bool Date::is_before(const Date& date) const{
    if(year_<date.year_) return true;
    if(year_==date.year_){
        if(month_<date.month_)
            return true;
        if(month_==date.month_)
            return day_<date.day_;    
    }
    return false;
}