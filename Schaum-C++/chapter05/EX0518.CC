//  Example 5.14, page ???
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>

const STUDENTS = 4;
const TESTS = 5;
typedef int Table[STUDENTS][TESTS];
void get(Table);
void print(const Table);
void print_test_averages(const Table);
void print_class_averages(const Table);

int main()
{ Table scores;
  get(scores);
  print(scores);
  print_test_averages(scores);
  print_class_averages(scores);
  return 0;
}

void get(Table x)
{ for (int s = 0; s < STUDENTS; s++)
    for (int t = 0; t < TESTS; t++)
      cin >> x[s][t];
}

void print(const Table scores)
{ cout << "The test scores are:\n";
  for (int s = 0; s < STUDENTS; s++)
  { for (int t = 0; t < TESTS; t++)
      cout << scores[s][t] << "\t";
    cout << endl;
  }
}

void print_test_averages(const Table scores)
{ cout << "The test averages are:\n";
  for (int s = 0; s < STUDENTS; s++)
  { float sum = 0.0;
    for (int t = 0; t < TESTS; t++)
      sum += scores[s][t];
    cout << "\tStudent " << s << ": " << sum/TESTS << endl;
  }
}

void print_class_averages(const Table scores)
{ cout << "The class averages are:\n";
  for (int t = 0; t < TESTS; t++)
  { float sum = 0.0;
    for (int s = 0; s < STUDENTS; s++)
      sum += scores[s][t];
    cout << "\tTest " << t << ": " << sum/STUDENTS << endl;
  }
}
