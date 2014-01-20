//  Example 10.4, page 225
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>
#include "/home/MCS-Fac/hubbard/c++/queue"
#include "/home/MCS-Fac/hubbard/c++/string"

typedef queue<string> string_queue;

void load(string_queue& s)
{ s.push("alpha");
  s.push("beta");
  s.push("gamma");
  s.push("delta");
  s.push("epsilon");
}

void dump(string_queue& s)
{ int n = s.size();
  for (int k=1; k <= n; k++)
  { cout << '\t' << k << ". " << s.front() << endl;
    s.pop();
  }
}

void upload(string_queue& s1, string_queue& s2)
{ while (!s2.empty())
  { s1.push(s2.front());
    s2.pop();
  }
}

int main()
{ string_queue letters;
  load(letters);
  string_queue backup = letters;  // uses the copy constructor
  cout << "In order:\n";
  dump(letters);
  upload(letters, backup);
  cout << "In order:\n";
  dump(letters);
}
