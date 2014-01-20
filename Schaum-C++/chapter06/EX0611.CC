//  Example 6.11, page 121
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <fstream.h>
#include <iostream.h>
#include "/home/MCS-Fac/hubbard/c++/bool"

bool more(ifstream& fin, int& n);
// This function attempts to read the integer n from the file fin;
// it returns true iff it is successful.

bool copy(ofstream& fout, ifstream& fin, int& n);
// This function copies n to the file fout and then calls the
// more() function to try to read another integer n from fin;
// it returns true iff it is successful.

int main()
// This program merges the two sorted files north.dat and south.dat
// into the file combined.dat.
{ ifstream fin1("north.dat");
  ifstream fin2("south.dat");
  ofstream fout("combined.dat");
  int n1, n2;
  bool more1 = more(fin1, n1);
  bool more2 = more(fin2, n2);
  while (more1 && more2)
    if (n1 < n2) more1 = copy(fout, fin1, n1);
    else more2 = copy(fout, fin2, n2);
  while (more1)
    more1 = copy(fout, fin1, n1);
  while (more2)
    more2 = copy(fout, fin2, n2);
  fout << endl;
}

bool more(ifstream& fin, int& n)
{ if (fin >> n) return true;
  else return false;
}

bool copy(ofstream& fout, ifstream& fin, int& n)
{ fout << " " << n;
  return more(fin, n);
}
