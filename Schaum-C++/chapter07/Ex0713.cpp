//  Fundamentals of Computing with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1999
//  Example 7.13 on page 150
//  Default values for parameters

class Ratio
{   friend Ratio operator+(Ratio, Ratio);
    friend istream& operator>>(istream&, Ratio&);
    friend ostream& operator<<(ostream&, const Ratio&);
  public:
    Ratio(int=0, int=1);   // constructor
  private:
    _reduce();              // enforces the class invariants
    int _num;              // numerator
    int _den;              // denominator
};
