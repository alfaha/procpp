//  Fundamentals of Computing with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1998
//  Example 14.11 on page 330

int main()
{ ifstream fin("Composers.dat");
  Composer composer;
  HashTable<Composer> table(TABLE_SIZE);
  while (get(composer, fin))
  { int k = hash(composer.lname + composer.fname);
    while (!table[k].is_null())
      k = (k+1) % TABLE_SIZE;
    table[k] = composer;
  }
  for (;;)
  { get(composer, cin);
    int k = hash(composer.lname + composer.fname);
    cout << "hash(" << composer.lname + composer.fname
         << ") = " << k << endl;
    if (find(table, composer, k))
    { composer = table[k];
    cout << composer.fname + " " + composer.lname
         << " was born in " << composer.yob << endl;
    }
    else
      cout << composer.fname + " " + composer.lname
           << " was not found in the hash table." << endl;
  }
}

void get(Composer& composer, istream& in)
{ char buf[BUF_SIZE];
  cout << "Enter composer's last name: ";
  in.getline(buf, BUF_SIZE);  composer.lname = buf;
  cout << "Enter composer's first name: ";
  in.getline(buf, BUF_SIZE);  composer.fname = buf;
}

template <class T>
bool find(HashTable<T>& t, Composer& c, int& k)
{ int count=0;
  while (t[k].lname != c.lname || t[k].fname != c.fname)
  { if (++count == TABLE_SIZE || t[k].is_null()) return false;
    cout << "\tNOT FOUND AT " << k << "\t";
    print(t[k]);
    k = (k + 1) % TABLE_SIZE;
  }
  return true;
}
