//  Example 2.14, page 31
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream>          // use <iostream.h> in pre-Standard C++

using namespace std;

int main()
{ float x = 666.66;
  float y[8] = {0};  // y is an array of 8 floats, all initialized to 0
  float* p = &x;     // p is a pointer to the float x
  float& r = x;      // y is a reference to the float x
}
