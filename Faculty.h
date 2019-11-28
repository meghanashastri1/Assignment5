/*Meghana Shastri
2317343
shastri@chapman.edu
CPSC 350-02
Assignment 5*/

#include "Member.h"
#include <iostream>
#include <sstream>
#include <string>

#ifndef FACULTY_H
#define FACULTY_H

class Faculty : public Member {
  public:
    string department;


    Faculty();
    Faculty(string name, string year, string department, unsigned int id);

    ~Faculty();

};

#endif
