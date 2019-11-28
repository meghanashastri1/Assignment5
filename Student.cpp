/*Meghana Shastri
2317343
shastri@chapman.edu
CPSC 350-02
Assignment 5*/

#include "Student.h"
#include <iostream>

using namespace std;

Student::Student():Member(){
  major = "";
  gpa = 0;
  advisor = 0;
}


Student::Student(unsigned int i, string n, string y, string m, double g):Member(){
  name = n;
  level = y;
  major = m;
  gpa = g;
  id = i;
  advisor = 0;
}

Student::Student(unsigned int i, string n, string y, string m, double g, int a):Member(){
  name = n;
  level = y;
  major = m;
  gpa = g;
  id = i;
  advisor = a;
}

Student::~Student()
{

}
