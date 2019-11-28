/*Meghana Shastri
2317343
shastri@chapman.edu
CPSC 350-02
Assignment 5*/

#include "Faculty.h"
#include <iostream>

using namespace std;

Faculty::Faculty():Member(){
  department = "";
}


Faculty::Faculty(string n, string y, string d, unsigned int i):Member(){
  name = n;
  level = y;
  department = d;
  id = i;
}

Faculty::~Faculty()
{

}
