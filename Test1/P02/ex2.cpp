#include <iostream>
using namespace std;

void advance(int delta, int &d, int &m, int &y);
bool is_leap_year(int y);
int days_in_month(int m, int y);

int main()
{
    int d = 1, m = 1, y = 2022;
    advance(0, d, m, y);
    cout << d << ' ' << m << ' ' << y << endl;

    d = 1, m = 10, y = 2022;
    advance(10, d, m, y);
    cout << d << ' ' << m << ' ' << y << endl;

    d = 1, m = 8, y = 2022;
    advance(31, d, m, y);
    cout << d << ' ' << m << ' ' << y << endl;

    d = 25, m = 1, y = 2000;
    advance(4, d, m, y);
    cout << d << ' ' << m << ' ' << y << endl;

    d = 1, m = 1, y = 2024;
    advance(365, d, m, y);
    cout << d << ' ' << m << ' ' << y << endl;

    return 0;
}

void advance(int delta, int &d, int &m, int &y){
    for (int i = delta; i > 0; i--){
        d++;
        if (days_in_month(m, y) == 31){
            if (d > 31){
                d = 1;
                m++;
            }if (m > 12){
                m = 0;
                y++;
            }
        }if (days_in_month(m, y) == 30){
            if (d > 30){
                d = 1;
                m++;
            }
        }if (m == 2){
            if (is_leap_year(y)){
                if (d > 29){
                    d = 1;
                    m++;
                }
            }else{
                if (d > 28){
                    d = 1;
                    m++;
                }
            }
        }
    }
}

bool is_leap_year(int y){
    bool r = true;
    if (y % 4 != 0 || y % 100 == 0)
        if (y % 400 != 0)
            r = false;
    return r;
}

int days_in_month(int m, int y){
    int d;
    switch (m){
    case 2:
        d = is_leap_year(y) ? 29 : 28; // February
        break;
    case 1:case 3:case 5:case 7:
    case 8:case 10:case 12:
        d = 31; // Months with 31 days
        break;
    default:
        d = 30; // All other months have 30 days
        break;
    }
    return d;
}