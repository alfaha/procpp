//  Fundamentals of Computing with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1999
//  Problem 7.10 on page 165
//  A class for generating random numbers

#include <iostream>
#include <climits>
#include <cmath>
#include <ctime>
typedef unsigned long ulong;
const int MAX = INT_MAX;              // = 2,147,483,647 or 32,767

class Random
{ public:
    Random(ulong seed=0);
    void seed(ulong seed=0);       // allows client to reset _seed
    int integer(ulong hi=MAX, ulong lo=1);
    double real();
  private:
    ulong _seed;             // INVARIANT: 0 <= _seed <= ULONG_MAX
    void _randomize();                             // resets _seed
};

Random::Random(ulong s)
{ if (s > 0) _seed = s;
  else _seed = time(NULL);
  _randomize();
}

void Random::seed(ulong s)
{ if (s > 0) _seed = s;
  else _seed = time(NULL);
  _randomize();
}

int Random::integer(ulong hi, ulong lo)
{ _randomize();
  return _seed/10 % (hi - lo + 1) + lo;
}

double Random::real()
{ _randomize();
  return double(_seed)/ULONG_MAX;
}

void Random::_randomize()
{ _seed = (1103515245*_seed + 123456789) % ULONG_MAX;
}

int main()
{ Random random;
  const int NUM=10;
  const int CNT=10000;
  const int MEAN=CNT/NUM;
  int bucket[NUM] = {0};
  int n, ssdev=0;
  for (int i=0; i < CNT; i++)
  { n = random.integer(NUM-1,0);  // 0 <= n <= 9
    bucket[n]++;                  // count n
    ssdev += (n-MEAN)*(n-MEAN);   // sum its deviation squared
  }
  for (int j=0; j < NUM; j++)
    cout << "\t" << j << ": " << bucket[j] << endl;
  cout << "Standard deviation = " << sqrt(ssdev/CNT) << endl;
  for (i=0; i < 25; i++)
    cout << random.integer(2) << ", ";
  cout << endl;
  for (i=0; i < 25; i++)
    cout << random.integer(6) << ", ";
  cout << endl;
  for (i=0; i < 20; i++)
    cout << random.integer(99,10) << "    "
         << random.integer(9999,1000) << "    "
         << random.integer(999999,100000) << "    "
         << random.real() << endl;
  return 0;
}
