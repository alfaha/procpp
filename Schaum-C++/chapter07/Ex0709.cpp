//  Fundamentals of Computing with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1999
//  Example 7.9 on page 146
//  Overloading input and output operators

class Ratio
{   friend Ratio operator+(Ratio, Ratio);
  public:
    Ratio(int, int);       // constructor
    void print() const;
  private:
    int _num;              // numerator
    int _den;              // denominator
};

Ratio operator+(Ratio x, Ratio y)
{ int num = x._num*y._den + x._den*y._num;
  int den = x._den*y._den;
  Ratio temp(num, den);
  return temp;
}
