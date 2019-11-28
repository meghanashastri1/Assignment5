/*Meghana Shastri
2317343
shastri@chapman.edu
CPSC 350-02
Assignment 5*/

#include "BST.h"
#include "Student.h"
#include "Faculty.h"
#include <iostream>
#include <stdlib.h>
#include <sstream>
#include <string>

#ifndef DATABASE_H
#define DATABASE_H

using namespace std;

class Database{
  public:
    BST<Student> studentTable;
    BST<Faculty> facultyTable;

    Database();
    ~Database();

    void printMenu();
    void runProgram();
    void printStudents();
    void printFaculty();
    void findStudent();
    void findFaculty();
    void getStudentAdvisor();
    void getFacultyAdvisees();
    void addNewStudent();
    void deleteStudent();
    void addNewFaculty();
    void deleteFaculty();
    void changeAdvisor();
    void removeAdvisee();
    void rollback();


};


#endif
