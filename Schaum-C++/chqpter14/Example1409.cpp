//  Fundamentals of Computing with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1998
//  Example 14.9 on page 328

#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

template <class T>
class HashTable
{ public:
    HashTable(int size) : _size(size)
      { _v = new T[size]; for (int i=0; i<size; i++) _v[i] = T(); }
    int size() { return _size; }
    T& operator[](int k) { return _v[k]; }
  protected:
    T* _v;
    int _size;
};

struct Composer
{ bool is_null() { return bool(lname.length() == 0); }
  string lname;
  string fname;
  int yob;
  int yod;
  string nationality;
};

bool get(Composer& composer, ifstream& fin)
{ char buffer[BUF_SIZE], temp[BUF_SIZE];
  fin.getline(buffer, BUF_SIZE);
  if (fin.fail()) return false;
  istrstream ss(buffer);  // binds the string stream ss to buffer
  ss.getline(temp, BUF_SIZE, '\t');  composer.lname = temp;
  ss.getline(temp, BUF_SIZE, '\t');  composer.fname = temp;
  ss >> composer.yob >> composer.yod;
  ss.getline(temp, BUF_SIZE, '\t');  // eat tab
  ss.getline(temp, BUF_SIZE);  composer.nationality = temp;
  return true;
}

int hash(string s)
{ int h=0;
  for (int i=0; i<s.length(); i++)
    h += int(s[i]);
  return h % TABLE_SIZE;
}

void print(Composer& composer)
{ cout << composer.lname << ", " << composer.fname << " ("
         << composer.yob << "-" << composer.yod << "), "
         << composer.nationality << "\n";
}

template <class T>
void print(HashTable<T>& t)
{ for (int k=0; k<t.size(); k++)
  { cout << setiosflags(ios::right) << setw(4) << k << ". ";
    if (!t[k].is_null()) print(t[k]);
    else cout << endl;
  }
}

template <class T>
void resolve_collision(HashTable<T>& t, Composer& c, int& k, int& n)
{ while (!t[k].is_null())
  { cout << "\tCOLLISION AT " << k << "\t";
    print(t[k]);
    k = (k+1) % TABLE_SIZE;
    ++n;
  }
}

int main()
{ ifstream fin("Composers.dat");
  Composer composer;
  HashTable<Composer> table(TABLE_SIZE);
  int collisions=0;
  while (get(composer, fin))
  { int k = hash(composer.lname + composer.fname);
    cout << "hash(" << composer.lname + composer.fname
         << ") = " << k << endl;
    resolve_collision(table, composer, k, collisions);
    table[k] = composer;
    cout << "\t" << composer.lname << " inserted at " << k << endl;
  }
  print(table);
  cout << "There were " << collisions << " collisions.\n";
}
