//  Test driver for Date class
//  Problem 8.21a, page 187
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>
#include "/home/MCS-Fac/hubbard/c++/string"

int main()
{ short* pk = new short;
  cout << "pk = " << pk << endl;
  int* pn = new int;
  cout << "pn = " << pn << endl;
  float* px = new float;
  cout << "px = " << px << endl;
  double* pz = new double;
  cout << "pz = " << pz << endl;
  string* ps = new string(5, ' ');
  cout << "ps = " << ps << endl;
  bool* pb = new bool[5];
  cout << "pb = " << pb << endl;
  float* py = new float[5];
  cout << "py = " << py << endl;
}
