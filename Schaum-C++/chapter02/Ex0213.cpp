//  Example 2.13, page 31
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream>          // use <iostream.h> in pre-Standard C++

using namespace std;

int main()
{ char ch = 'A';       // ch is stored in one byte as the integer 65
  cout << ch << " " << int(ch) << endl;
}
