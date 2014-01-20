//  Example 5.11, page ???
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <assert.h>
#include <iostream.h>

enum {A, B, C, D, F};

int main()
{ int freq[5] = {0};
  int grade;
  cin >> grade;
  while (!cin.eof())
  { assert (grade >= 0 && grade <= 100);
    if (grade >= 90) ++freq[A];
    else if (grade >= 80) ++freq[B];
    else if (grade >= 70) ++freq[C];
    else if (grade >= 60) ++freq[D];
    else ++freq[F];
    cin >> grade;
  }
  float total = freq[A] + freq[B] + freq[C] + freq[D] + freq[F];
  cout << "total = " << total << endl;
  cout << "A: " << freq[A] << " = " << 100.0*freq[A]/total << "%\n";
  cout << "B: " << freq[B] << " = " << 100.0*freq[B]/total << "%\n";
  cout << "C: " << freq[C] << " = " << 100.0*freq[C]/total << "%\n";
  cout << "D: " << freq[D] << " = " << 100.0*freq[D]/total << "%\n";
  cout << "F: " << freq[F] << " = " << 100.0*freq[F]/total << "%\n";
  return 0;
}
