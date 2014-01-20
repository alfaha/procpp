//  Fundamentals of Computing with C++ by John R. Hubbard
//  Copyright McGraw-Hill, 1999
//  Problem 7.8 on page 163
//  A function to reverse a queue

void reverse(Queue& q)
{ Stack s;
  while(!q.is_empty())
    s.push(q.leave());
  while(!s.is_empty())
    q.enter(s.pop());
}
