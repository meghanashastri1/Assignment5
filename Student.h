/*Meghana Shastri
2317343
shastri@chapman.edu
CPSC 350-02
Assignment 5*/

#include "Member.h"
#include <iostream>
#include <sstream>
#include <string>



#ifndef STUDENT_H
#define STUDENT_H

using namespace std;


class Student : public Member {
  public:
    string major;
    double gpa;
    unsigned int advisor;

    Student();
    Student(unsigned int id, string name, string year, string major, double gpa);
    Student(unsigned int id, string name, string year, string major, double gpa, int a);
    ~Student();

};

#endif
