//  Example 6.14, page 123
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <fstream.h>
#include <iostream.h>
#include <stdlib.h>
#include "/home/MCS-Fac/hubbard/c++/string"

void load(fstream& f)
{ for (int i=1; i <= 5; i++)     // write 5 64-char lines
  { for (int j=1; j <= 60; j++)
      f << j%10;                 // write 60 digits
    f << "  " << i << '\n';      // write 4 chars
  }
}

void dump(fstream& f)
{ f.seekg(0);
  char c;
  while (f.get(c))
    cout.put(c);
  f.clear();  // reset eofbit
}

int main()
{ fstream file("Demo.dat", ios::in | ios::out | ios::trunc);
  if (!file)
  { cerr << "File Demo.dat could not be opened.\n";
    exit(1);
  }
  load(file);
  dump(file);
  int pos, len;
  cin >> pos >> len;
  file.seekp(pos);
  string s(len, '*');
  file.write(s.c_str(), s.length());
  dump(file);
}
