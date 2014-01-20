//  Fundamentals of Computing with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1998
//  Problem 13.14 on page 318

template<class T>
void sort(T* a, int n)
{ bool sorted=false;
  for (int i=1; i < n && !sorted; i++)
    for (int j=1; j <= n-i; j++)
    { sorted = true;
      if (a[j-1] > a[j])
      { swap(a[j-1], a[j]);
        sorted = false;
      }
    }
}
