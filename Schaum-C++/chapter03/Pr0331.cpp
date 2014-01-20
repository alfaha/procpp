//  Problem 3.30, page 65
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iomanip.h>
#include <iostream.h>

int main()
{ double x, y, sumx=0.0, sumy=0.0, sumxx=0.0, sumxy=0.0;
  int n;
  cout << "How many data points do you have: ";
  cin >> n;
  cout << "Enter " << n << " pairs x and y:\n";
  setiosflags(ios::right);
  for (int i=1; i <= n; i++)
  { cout << setw(8) << i << ": ";
    cin >> x >> y;
    sumx += x;
    sumy += y;
    sumxx += x*x;
    sumxy += x*y;
  }
  double meanx = sumx/n;
  double meany = sumy/n;
  double m = (n*sumxy - sumx*sumy)/(n*sumxx - sumx*sumx);
  double b = meany - m*meanx;
  cout << "The equation of the Gaussian regression line is: y = "
       << m << "x + " << b << endl;
  char ans;
  cout << "Do you want to interpolate? (y/n): ";
  cin >> ans;
  if (ans == 'y' || ans == 'Y')
  { cout << "Enter x values, one per line.\n"
         << "Terminate input with <Ctrl-D>:\n";
    while (cin >> x)
      cout << "\ty = " << m*x +b << endl;
  }
}
