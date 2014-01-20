//  Example 10.6, page 232
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <assert.h>
#include <fstream.h>
#include <iomanip.h>
#include <iostream.h>
#include "/home/MCS-Fac/hubbard/c++/bool"
#include "list"
#include "/home/MCS-Fac/hubbard/c++/string"

typedef list SL;             // string list type
typedef list::iterator SLI;  // string list iterator type

string extract_word(SLI& it)
{ string element = *it;
  int k = element.find('\t');
  return element.substr(0, k);
}

bool found(SL& x, SLI& it, string& new_word)
{ for (it=x.begin(); it != x.end(); ++it)
  { string word = extract_word(it);
    if (word == new_word) return true;
    if (word > new_word) return false;
  }
}

string literal(int n)
{ assert(n >= 0 && n <= 99);
  string s(2);
  s[0] = char('0' + n/10);
  s[1] = char('0' + n%10);
  return s;
}

void print(SL& x)
{ int i=1;
  for (SLI it=x.begin(); it != x.end(); ++it, ++i)
    cout << setw(4) << i << ". " << *it << endl;
}

int main()
{ SL x;
  SLI it = x.begin();
  string new_word;
  int count=0;
  while (cin >> new_word)
  { ++count;
    if (found(x, it, new_word)) *it += ", " + literal(count);
    else x.insert(it, new_word + "\t" + literal(count));
  }
  print(x);
}
