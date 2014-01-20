//  Problem 4.32, page 81
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <assert.h>
#include <iostream.h>

void print_date(int n);
//  Prints the month and day of the month for the year day n,
//  assuming that the year is not a leap year. 
//  PRECONDITION: 1 <= n <= 365
//  EXAMPLE: print_date(65) prints: March 6

int main()
{ cout << "day(5) =   ";  print_date(5);
  cout << "day(35) =  ";  print_date(35);
  cout << "day(65) =  ";  print_date(65);
  cout << "day(365) = ";  print_date(365);
}

void print_date(int day)
{ assert(day >= 0 && day <= 365);
  if (day < 32) cout << "January ";
  else
  { day -= 31;
    if (day < 29) cout << "February ";
    else
    { day -= 28;
      if (day < 32) cout << "March ";
      else
      { day -= 31;
        if (day < 31) cout << "April ";
        else
        { day -= 30;
          if (day < 32) cout << "May ";
          else
          { day -= 31;
            if (day < 31) cout << "June ";
            else
            { day -= 30;
              if (day < 32) cout << "July ";
              else
              { day -= 31;
                if (day < 32) cout << "August ";
                else
                { day -= 31;
                  if (day < 31) cout << "September ";
                  else
                  { day -= 30;
                    if (day < 32) cout << "October ";
                    else
                    { day -= 31;
                      if (day < 31) cout << "November ";
                      else
                      { day -= 30;
                        cout << "December ";
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  cout << day << endl; 
}
