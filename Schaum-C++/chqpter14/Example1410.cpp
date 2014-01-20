//  Fundamentals of Computing with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1998
//  Example 14.10 on page 330

template <class T>
bool find(HashTable<T>& t, Composer& c, int& k)
{ int count=0;
  while (t[k].lname != c.lname && count++ < TABLE_SIZE)
    k = (k+1) % TABLE_SIZE;
  return bool(t[k].lname == c.lname);
}
