//  Fundamentals of Computing with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1999
//  Example 7.5 on page 141
//  A Ratio class

class Ratio
{ public:
    Ratio(int num, int den) { _num = num; _den = den; }
    void print() { cout << _num << '/' << _den; }
  private:
    int _num;              // numerator
    int _den;              // denominator
};

int main()
{ Ratio x(3,4);    // constructs the object x representing 3/4
  x.print();       // calls the print() function for the object x
  cout << endl;
  return 0;
}
