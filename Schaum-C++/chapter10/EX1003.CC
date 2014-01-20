//  Example 10.3, page 224
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>
#include "/home/MCS-Fac/hubbard/c++/stack"
#include "/home/MCS-Fac/hubbard/c++/string"

typedef stack<string> string_stack;

void load(string_stack& s)
{ s.push("alpha");
  s.push("beta");
  s.push("gamma");
  s.push("delta");
  s.push("epsilon");
}

void dump(string_stack& s)
{ int n = s.size();
  for (int k=1; k <= n; k++)
  { cout << '\t' << k << ". " << s.top() << endl;
    s.pop();
  }
}

void upload(string_stack& s1, string_stack& s2)
{ while (!s2.empty())
  { s1.push(s2.top());
    s2.pop();
  }
}

int main()
{ string_stack letters;
  load(letters);
  string_stack backup = letters;  // uses the copy constructor
  cout << "In reverse order:\n";
  dump(letters);
  upload(letters, backup);
  cout << "In order:\n";
  dump(letters);
}
