//  Example 6.12, page 122
//  Schaum's Outline of Fundamental of Computing with C++
//  by John R. Hubbard
//  Copyright McGraw-Hill, 1998

#include <fstream.h>
#include <iomanip.h>
#include <iostream.h>
#include <strstream.h>
#include "/home/MCS-Fac/hubbard/c++/bool"
#include "/home/MCS-Fac/hubbard/c++/string"

int credit(string grade_rec);

void get(string& student_rec, fstream& students, string id);

void update(string& student_rec, char grade, int credit);

void put(string student_rec, fstream& students);

bool more(ifstream& fin, int& n);
// This function attempts to read the integer n from the file fin;
// it returns true iff it is successful.

bool copy(ofstream& fout, ifstream& fin, int& n);
// This function copies n to the file fout and then calls the
// more() function to try to read another integer n from fin;
// it returns true iff it is successful.

const int STUDENT_REC_SIZE=30;

int main()
//  This program processes the grades in the Grades.dat file to 
//  update the student gpa fields in the Students.dat file.
{ fstream students("Students.dat", ios::in | ios::out);
  ifstream grades("Grades.dat");
  string grade_rec;    // a line from the Grades.dat file
  string student_rec;  // a line from the Students.dat file
  string _id;          // the student id from the grade_rec
  char _grade;         // the student grade from the grade_rec
  int _credit;       // the student credit from the grade_rec
  while (getline(grades, grade_rec))
  { _id = grade_rec.substr(0,9);
    _grade = grade_rec[10];
    _credit = credit(grade_rec);
cout << _id << '\t' << _grade << '\t' << _credit << endl;
    get(student_rec, students, _id);
cout << '\t' << student_rec << endl;
    update(student_rec, _grade, _credit);
cout << '\t' << student_rec << endl;
    put(student_rec, students);
  }
}

int credit(string grade_rec)
{ string s = grade_rec.substr(12,3);
  const char* cs = s.c_str();
  istrstream ss(cs, 3);
  int n;
  ss >> n;
  return n;
}

void get(string& student_rec, fstream& students, string id)
{ while (!students.eof())
  { getline(students, student_rec);
    if (student_rec.substr(0,9) == id) break;
  }
}

void update(string& student_rec, char grade, int credit)
{ int grade_points = 4 - int(grade - 'A');
  grade_points = (grade_points < 0 ? 0 : grade_points);
  string s = student_rec.substr(22,7);
  const char* inbuf = s.c_str();
  istrstream iss(inbuf, 7);
  int credits;
  iss >> credits;
  float gpa, points;
  iss >> gpa;
  points = credits*gpa + credit*grade_points;
  credits += credit;
  gpa = points/credits;
  char outbuf[8];
  ostrstream oss(outbuf, 7);
  oss << credits << '\t' << setprecision(3) << gpa;
  s = string(outbuf);
  student_rec.replace(22, 7, s.substr(0,7));
}

void put(string student_rec, fstream& students)
{ student_rec += string(1, '\n');  // append the newline character
  const char* p = student_rec.c_str();
  int location = students.tellg();
  location -= STUDENT_REC_SIZE;
  students.seekp(location);
  students.write(p, STUDENT_REC_SIZE);
}
