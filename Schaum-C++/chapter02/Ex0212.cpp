//  Example 2.12, page 30
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iomanip>            // use <iomanip.h> in pre-Standard C++
#include <iostream>          // use <iostream.h> in pre-Standard C++

using namespace std;                     // omit in pre-Standard C++

int main()
{ cout << false << " " << true << " "
       << boolalpha << false << " " << true << endl;
}
