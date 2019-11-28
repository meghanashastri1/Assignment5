#include "Database.h"


#include <iostream>
#include <fstream>

/*Meghana Shastri
2317343
shastri@chapman.edu
CPSC 350-02
Assignment 5*/


//#include "BST.h"
using namespace std;

int main(int argc, char const *argv[]) {

  const string facultyFile = "facultyTable";
  const string studentFile = "studentTable";
  ifstream facFileReader(facultyFile + ".txt");
  ifstream studFileReader(studentFile + ".txt");
  ofstream studentOutput;
  ofstream facultyOutput;
  Database db;

  if (!facFileReader.is_open()){
    facultyOutput.open(studentFile + ".txt");
  } else {
    facultyOutput.open(studentFile + ".txt", ios::app);
  }
  if (!studFileReader.is_open()){
    //ofstream studentOutput(studentFile + ".txt");
    studentOutput.open(studentFile + ".txt");
  } else {
    studentOutput.open(studentFile + ".txt", ios::app);
  }
  studentOutput << "saving data to a file\n" << flush;
  facultyOutput << "saving data to a file \n" << flush;
  studentOutput.close();

  db.runProgram();

  //db.printMenu();

  return 0;
};
