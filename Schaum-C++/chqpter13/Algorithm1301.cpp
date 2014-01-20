//  Fundamentals of Computing with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1998
//  Algorithm 13.1 on page 304

template<class T>
void sort(T* a, int n)
{ for (int i=1; i < n; i++)
    for (int j=1; j <= n-i; j++)
      if (a[j-1] > a[j]) swap(a[j-1], a[j]);
    // Invariant: the i largest elements are in the correct locations.
}
