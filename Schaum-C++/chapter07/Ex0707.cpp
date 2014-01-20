//  Fundamentals of Computing with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1999
//  Example 7.7 on page 144
//  Using friend functions

class Ratio
{ public:
    Ratio(int num, int den) { _num = num; _den = den; }
    void print() const { cout << _num << '/' << _den; }
    friend Ratio sum(Ratio x, Ratio y)
    { int num = x._num*y._den + x._den*y._num;
      int den = x._den*y._den;
      Ratio temp(num, den);
      return temp;
    }
  private:
    int _num;              // numerator
    int _den;              // denominator
};
int main()
{ Ratio r(3,4), s(2,3), t(0,1);  // constructs objects r, s, and t
  t = sum(r,s);                 // assigns to t the sum of r and s
  t.print();        // calls the print() function for the object t
  cout << endl;
  return 0;
}
