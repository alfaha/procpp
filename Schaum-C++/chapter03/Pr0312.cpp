//  Problem 3.12, page 62
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>

int main()
{ int day;
  cout << "Enter the day of the year (1-365): ";
  cin >> day;
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
