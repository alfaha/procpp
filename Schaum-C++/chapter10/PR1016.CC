//  Problem 10.16, page 235
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <fstream.h>
#include <iostream.h>
#include "/home/MCS-Fac/hubbard/c++/queue"
#include "/home/MCS-Fac/hubbard/classes/Date.h"
#include "/home/MCS-Fac/hubbard/classes/Person.h"

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

int number_of_numbers(SLI& it)
{ int count=0;
  string element = *it;
  int k = element.find('\t');
  return (element.length() - k + 1)/4;
}

int freq(SL& x, string& word)
{ string x_word;
  for (SLI it=x.begin(); it != x.end(); ++it)
  { string x_word = extract_word(it);
    if (word == x_word) return number_of_numbers(it);
  }
  return 0;
}

int main()
{ SL x;
  SLI it = x.begin();
  string new_word;
  int count=0;
  ifstream fin("ex1006.dat");
  while (fin >> new_word)
  { ++count;
    if (found(x, it, new_word)) *it += ", " + literal(count);
    else x.insert(it, new_word + "\t" + literal(count));
  }
  print(x);
  string word;
  while (cin >> word)
    cout << "\tfreq(x, " << word << ") = " << freq(x, word) << endl;
}
