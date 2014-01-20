//  Fundamentals of Computing with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1999
//  Example 7.4 on page 140
//  A swap() function template

template <class T>
void swap(T& x, T& y)
{ T t = x;
  x = y;
  y = t;
}
int main()
{ int a = 44;
  int b = 66;
  swap(a, b);         // compiler generates void swap(int, int);
  float s = 4.4;
  float t = 6.6;
  swap(s, t);         // compiler generates void swap(float, float);
  string mr = "George";
  string ms = "Martha";
  swap(mr, ms);       // compiler generates void swap(string, string);
  return 0;
}
