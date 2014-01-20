//  Fundamentals of Computing with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1998
//  Algorithm 13.3 on page 307

template<class T>
void sort(T* a, int n)
{ for (int i=1; i < n; i++)
  { T temp = a[i];
    for (int j=i; j > 0 && a[j-1] > temp; j--)
      a[j] = a[j-1];
    a[j] = temp;
    // Invariant: a[0] <= a[1] <= ... <= a[i].
  }
}
