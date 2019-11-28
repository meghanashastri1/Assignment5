/*Meghana Shastri
2317343
shastri@chapman.edu
CPSC 350-02
Assignment 5*/

#ifndef MEMBER_H
#define MEMBER_H


#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Member{
  public:
    unsigned int id;
    string name;
    string level;

    Member();
    ~Member();


    bool operator==(const Member& m);
    bool operator==(const int m);
    bool operator!=(const Member& m);
    bool operator<(const Member& m);
    bool operator>(const Member& m);

};


#endif
