//  Fundamentals of Computing with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1998
//  Example 14.2 on page 320

list<string> presidents;
list<string>::iterator it=presidents.begin();
presidents.insert(it++, "Washington");
presidents.insert(it++, "Adams");
presidents.insert(it++, "Jefferson");
presidents.insert(it++, "Madison");
presidents.insert(it++, "Monroe");
presidents.insert(it++, "Adams");
for (;;)
{ it = find(presidents, it, presidents.end(), "Adams");
  if (it == presidents.end()) break;
  cout << "Adams was found." << endl;
}
