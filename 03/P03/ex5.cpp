
struct time_of_day {
  unsigned char h;  // hours (0 to 23)
  unsigned char m;  // minutes (0 to 59)
};
struct interval {
  time_of_day start;  // start time
  time_of_day end;    // end time
};
#include <iostream>
using namespace std;
 
//! Prints the results.
void print(int d, const interval il) {
  cout << d << " ["
       << (int) il.start.h << ':' << (int) il.start.m << ','
       << (int) il.end.h   << ':' << (int) il.end.m 
       << "[\n";
}

bool isEarlier(time_of_day time1, time_of_day time2){
    if (time1.h == time2.h) return (time1.m < time2.m);
    return (time1.h < time2.h);
}

bool contains(interval inter, time_of_day time) {
    return (!isEarlier(time, inter.start) && isEarlier(time, inter.end));
}

int duration(interval inter) {
    if (inter.end.h == inter.start.h) return inter.end.h - inter.start.h;
    return 60 * (inter.end.h - inter.start.h) + inter.end.m - inter.start.m;
}

int search_intervals(time_of_day t, const interval a[], int n, interval& u) {
    u.start = t, u.end = t;
    for (int i = 0; i < n; i++) {
        if (contains(a[i], t)) {
            if (isEarlier(a[i].start, u.start)) u.start = a[i].start;
            if (!isEarlier(a[i].end, u.end)) u.end = a[i].end;
        }
    }
    return duration(u);
}