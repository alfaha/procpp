//  Example 2.17, page 32
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iomanip>              // use <iomanip.h> in pre-Standard C++
#include <iostream>            // use <iostream.h> in pre-Standard C++

using namespace std;                       // omit in pre-Standard C++

int main()
{ int n = 75;
  cout << '\t' << oct << n << '\t' << hex << n 
       << '\t' << dec << n << endl;
  cout << '\t' << setw(16) << n << endl;
  cout << '\t' << setfill('.') << setw(16) << n << endl;
  cout << '\t' << setfill('*') << setw(16) << n << endl;
  cout.setf(ios::left, ios::adjustfield);  // left justify output
  cout << '\t' << setfill('<') << setw(16) << n << endl;
  cout << setfill('.') << setw(40) << "Chapter 13";
  cout.setf(ios::right, ios::adjustfield);
  cout << setw(30) << "415" << endl;
  const double PI = 3.14159265358979323846;
  cout << PI << endl;
  cout << setprecision(10) << PI << endl;
  cout << setprecision(12) << PI << endl;
  cout << setprecision(14) << PI << endl;
  cout << setprecision(16) << PI << endl;
  cout << setprecision(18) << PI << endl;  
}
