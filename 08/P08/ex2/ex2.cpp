#include <iostream>
#include <iomanip>
#include "Date1.h"
 
using namespace std;
bool is_before(const Date& date1, const Date& date2){
    if(date1.get_year() < date2.get_year())
        return true;
    else if(date1.get_year() == date2.get_year()){
        if (date1.get_month() < date2.get_month())
            return true;
        else if(date1.get_month() == date2.get_month())
            if (date1.get_day() < date2.get_day())
                return true;
    }
    return false;
}