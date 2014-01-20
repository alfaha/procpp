//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998
//  Problem 6.24 on page 135

#include <fstream>
#include <iostream>
using namespace std;

bool more(ifstream& fin, string& s);
// This function attempts to read the string s from the file fin;
// it returns true iff it is successful.

bool copy(ofstream& fout, ifstream& fin, string& n);
// This function copies s to the file fout and then calls the
// more() function to try to read another string s from fin;
// it returns true iff it is successful.

int main()
// This program merges the two sorted files north.dat and south.dat
// into the file combined.dat.
{ ifstream fin1("Democrats.dat");
  ifstream fin2("Republicans.dat");
  ofstream fout("Presidents.dat");
  string s1, s2;
  bool more1 = more(fin1, s1);
  bool more2 = more(fin2, s2);
  while (more1 && more2)
    if (s1 < s2) more1 = copy(fout, fin1, s1);
    else more2 = copy(fout, fin2, s2);
  while (more1)
    more1 = copy(fout, fin1, s1);
  while (more2)
    more2 = copy(fout, fin2, s2);
}

bool more(ifstream& fin, string& s)
{ if (getline(fin, s)) return true;
  else return false;
}

bool copy(ofstream& fout, ifstream& fin, string& s)
{ cout << s << endl;
  fout << s << endl;
  return more(fin, s);
}
