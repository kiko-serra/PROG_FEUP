#include <iostream>
using namespace std;

void advance(int delta, int &d, int &m, int &y);
bool is_leap_year(int y);
int days_in_month(int m, int y);

int main()
{
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  advance(d, a, b, c);
  cout << "date: " << a <<" "<< b <<" "<< c <<" "<< endl;
  return 0;
}
/*
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
  int aux = delta;
  int aux_dias = days_in_month(m, y);
  if (delta + d > aux_dias)
  {
    delta -= aux_dias - d;
    m++;
  }
  
  for (int i = 0; i < aux; i++)
  {
    d++;
    delta--;
  }
  
  d++;
  delta--;
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
    d = is_leap_year(y) ? 29 : 28;
    break;
  case 1: case 3: case 5:
  case 7: case 8: case 10:
  case 12:
    d = 31;
    break;
  default:
    d = 30;
    break;
  }
  return d;
}
*/

void advance(int delta, int& d, int& m, int& y) {
  for (int x = delta; x > 0; x--) {
    switch (m) {
      case 1: case 3: case 5: case 7: case 8: case 10: case 12:
      d++;
      if (d > 31) {
        d = 1;
        m++;
      }
      if (m > 12) {
        y++;
        m = 1;
      }
      break;
      case 4: case 6: case 9: case 11:
      d++;
      if (d > 30) {
        d = 1;
        m++;
      }
      break;
      case 2:
      if (y % 4 == 0 && y % 100 != 0) {
        d++;
        if (d > 29) {
          d = 1;
          m++;
          break;
        }
      }
      else if (y % 400 == 0) {
        d++;
        if (d > 29) {
          d = 1;
          m++;
          break;
        }
      }
      else {
        d++;
        if (d > 28) {
          d = 1;
          m++;
          break;
        }
      }
    }
  }
}
#include <iostream>
using namespace std;

void advance(int delta, int &d, int &m, int &y);
bool is_leap_year(int y);
int days_in_month(int m, int y);

int main()
{
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  advance(d, a, b, c);
  cout << "date: " << a <<" "<< b <<" "<< c <<" "<< endl;
  return 0;
}
/*
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
  int aux = delta;
  int aux_dias = days_in_month(m, y);
  if (delta + d > aux_dias)
  {
    delta -= aux_dias - d;
    m++;
  }
  
  for (int i = 0; i < aux; i++)
  {
    d++;
    delta--;
  }
  
  d++;
  delta--;
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
    d = is_leap_year(y) ? 29 : 28;
    break;
  case 1: case 3: case 5:
  case 7: case 8: case 10:
  case 12:
    d = 31;
    break;
  default:
    d = 30;
    break;
  }
  return d;
}
*/

void advance(int delta, int& d, int& m, int& y) {
  for (int x = delta; x > 0; x--) {
    switch (m) {
      case 1: case 3: case 5: case 7: case 8: case 10: case 12:
      d++;
      if (d > 31) {
        d = 1;
        m++;
      }
      if (m > 12) {
        y++;
        m = 1;
      }
      break;
      case 4: case 6: case 9: case 11:
      d++;
      if (d > 30) {
        d = 1;
        m++;
      }
      break;
      case 2:
      if (y % 4 == 0 && y % 100 != 0) {
        d++;
        if (d > 29) {
          d = 1;
          m++;
          break;
        }
      }
      else if (y % 400 == 0) {
        d++;
        if (d > 29) {
          d = 1;
          m++;
          break;
        }
      }
      else {
        d++;
        if (d > 28) {
          d = 1;
          m++;
          break;
        }
      }
    }
  }
}