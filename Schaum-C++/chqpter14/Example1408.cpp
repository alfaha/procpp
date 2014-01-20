//  Fundamentals of Computing with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1998
//  Example 14.8 on page 326

#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

const int BUF_SIZE=80;
const int TABLE_SIZE=17;

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
  print(table);
}
