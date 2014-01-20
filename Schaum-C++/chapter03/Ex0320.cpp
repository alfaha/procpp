//  Example 3.20, page 50
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iomanip.h>               // defines setiosflags() and setw()
#include <iostream.h>

int main()
{ setiosflags(ios::right);                 // right-justify the output
  int n;
  cout << "Enter a positive integer: ";
  cin >> n;
  int count = 0;
  do
  { if (n%2 == 0) n /= 2;
    else n = 3*n + 1;
    cout << setw(6) << n;       // use a field of 6 columns per number
    ++count;
    if (count%10 == 0) cout << endl;     // prints 10 numbers per line
  } while (n > 1);
  cout << "\nThat sequence has " << count << " terms.\n";
}
