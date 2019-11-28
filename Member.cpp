/*Meghana Shastri
2317343
shastri@chapman.edu
CPSC 350-02
Assignment 5*/

#include "Member.h"
#include <iostream>

using namespace std;

Member::Member(){
  id = 0;
  name = "";
  level = "";
}

Member::~Member(){

}

bool Member::operator==(const Member& m) {
  if (m.id == id) {
    return true;
  } else {
    return false;
  }
}

bool Member::operator==(const int m) {
  if (m == id) {
    return true;
  } else {
    return false;
  }
}

bool Member::operator!=(const Member& m) {
  if (m.id != id) {
    return true;
  } else {
    return false;
  }
}

bool Member::operator<(const Member& m) {
  if (m.id > id) {
    return true;
  } else {
    return false;
  }
}

bool Member::operator>(const Member& m) {
  if (m.id < id) {
    return true;
  } else {
    return false;
  }
}
