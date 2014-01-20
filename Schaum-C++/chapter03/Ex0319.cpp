//  Example 3.19, page 50
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>

int main()
{ bool cont;
  char ans;
  do
  { cout << "Continue? (y/n): ";
    cin >> ans;
    if (ans == 'y' || ans == 'Y') cont = true;
    else if (ans == 'n' || ans == 'N') cont = false;
    else cout << "Please answer either y or n.\n";
  } while (ans != 'y' && ans != 'Y' && ans != 'n' && ans != 'N');
  cout << "cont = " << cont << endl;
}
