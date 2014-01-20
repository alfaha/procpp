//  Test driver for Date class
//  Example 8.12, page 181
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>

char* strchr(char* s, char c)
{ for (char* p=s; *p; p++)
    if (*p == c) return p;
  return 0;
}

void locate(char* s, char c)
{ char* p = strchr(s, c);
  if (*p == 0) cout << "Not found" << endl;                   // ERROR
  else cout << "The first occurrence of the character '" << c
            << "'\n\tin the string \"" << s
	    << "\"\n\tis at position: " << p - s << endl;
}

int main()
{ locate("Newton, Isaac, 1642-1727", 'a');
  locate("Leibniz, Gottfried Wilhelm, 1646-1716", 'l');
  locate("Gauss, Carl Friedrich, 1777-1855", 'k');
}
