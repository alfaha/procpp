//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998
//  Problem 6.14 on page 131

#include <iostream>
using namespace std;

int main()
{ string word;
  const int SIZE=91;       // for frequency array (int('Z') == 90)
  int lines=0, words=0, freq[SIZE] = {0}, len;
  char c;
  while (cin >> word)
  { ++words;
    cin.get(c);
    if (c == '\n') ++lines;
    len = word.length();
    for (int i=0; i<len; i++)
    { c = word[i];
      if (c >= 'a' && c <= 'z') c += 'A' - 'a';    // capitalize c
      if (c >= 'A' && c <= 'Z') ++freq[c];              // count c
    }
  }
  cout << "The input had " << lines << " lines, " << words
       << " words,\nand the following letter frequencies:\n";
  for (int i=65; i<SIZE; i++)
  { cout << '\t' << char(i) << ": " << freq[i];
    if (i > 0 && i%8 == 0) cout << endl;      // print 8 to a line
  }
  cout << endl;
}
