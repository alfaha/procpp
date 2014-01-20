//  Example 5.6, page ???
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <assert.h>
#include <iostream.h>

const DAYS_IN_MONTH[13] =
  {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
enum Month
  {JAN=1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC};
const int DAYS_IN_YEAR = 365;

Month month(int day_of_year)
{ assert(day_of_year >= 1 && day_of_year <= DAYS_IN_YEAR);
  int days = 0;
  for (Month m=JAN; m<=DEC; m = Month(m+1))
  { if (days >= day_of_year) return Month(m-1);
    days += DAYS_IN_MONTH[m];
  }
  return DEC;
}

int main()
{ for (int d=1; d<=DAYS_IN_YEAR; d += 14)  // check each fortnight
    cout << "month(" << d << ") = " << month(d) << endl;
  return 0;
}
