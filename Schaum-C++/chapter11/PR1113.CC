//  Problem 11.13, page 259
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <fstream.h>
#include <iostream.h>

void reverse(ofstream& output, ifstream& input)
{ char buffer[80];
  if (input.getline(buffer, 80))
  { reverse(output, input);
    output << buffer << endl;
  }
}

int main()
{ ifstream fin("Input.txt");
  ofstream fout("Output.txt");
  reverse(fout, fin);
}
