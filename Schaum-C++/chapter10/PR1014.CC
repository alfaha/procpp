//  Problem 10.14, page 235
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <iostream.h>
#include "/home/MCS-Fac/hubbard/c++/queue"
#include "/home/MCS-Fac/hubbard/classes/Date.h"
#include "/home/MCS-Fac/hubbard/classes/Person.h"

int main()
{ queue<Person> line;
  line.push(Person("Clinton", "William"));
  Address whitehouse("1600 Pennsylvania Avenue", "Washington", "DC");
  line.front().set_address(whitehouse);
  line.push(Person("Clinton", "Hillary"));
  line.push(Person("Gore", "Albert"));
  cout << "There are " << line.size() << " people in line.\n";
  cout << "The name of the first person in line is "
       << line.front().fname() + " " + line.front().lname() << endl;
  cout << "His street address is "
       << line.front().address().street() << endl;
  cout << "The name of the last person in line is "
       << line.back().fname() + " " + line.back().lname() << endl;
}
