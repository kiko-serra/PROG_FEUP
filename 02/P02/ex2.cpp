#include <iostream>
using namespace std;

void advance(int delta, int &d, int &m, int &y);
bool is_leap_year(int y);
int days_in_month(int m, int y);

int main()
{
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  cout << is_leap_year(a) << endl;
  return 0;
}

void advance(int delta, int &d, int &m, int &y)
{
  int days_in_year;
  while (delta >= (days_in_year = is_leap_year(y) ? 366 : 365))
  {
    y++;
    delta -= days_in_year;
  }
  while (delta >= days_in_month(m, y))
  {
    if (m == 12)
    {
      m=1;
      y++;
    }
    else{
      m++;
      delta -= days_in_month(m, y);
    }
    
  }
}

bool is_leap_year(int y)
{
  bool r = true;
  if (y % 4 != 0 || y % 100 == 0)
    if (y % 400 != 0)
      r = false;
  return r;
}

int days_in_month(int m, int y)
{
  int d;
  switch (m)
  {
  case 2:
    d = is_leap_year(y) ? 29 : 28; // February
    break;
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 12:
    d = 31; // Months with 31 days
    break;
  default:
    d = 30; // All other months have 30 days
    break;
  }
  return d;
}