//  Fundamentals of Computing with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1998
//  Problem 14.15 on page 338

template <class T>
void resolve_collision(HashTable<T>& t, Composer& c, int& k, int& n)
{ int k0=k;
  for (int j=1; !t[k].is_null(); j++, n++)
  { cout << "\tCOLLISION AT " << k << "\t";
    print(t[k]);
    k = (k0 + j*j) % TABLE_SIZE;
  }
}
