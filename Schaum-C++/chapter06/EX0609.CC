//  Example 6.9, page 119
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>
#include "/home/MCS-Fac/hubbard/c++/bool"
#include "/home/MCS-Fac/hubbard/c++/string"

bool is_vowel(char c)
{ return bool(c == 'a' ||c == 'e' ||c == 'i' ||c == 'o' ||c == 'u');
}

int main()
{ string word;
  int k;
  while (cin >> word)
  { k = word.find("t") + 1;
    if (k < word.length() && is_vowel(word[k]))
      word.replace(k, 0, "eg");
    cout << word << ' ';
  }
  cout << endl;
}
