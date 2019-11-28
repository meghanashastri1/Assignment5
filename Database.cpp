/*Meghana Shastri
2317343
shastri@chapman.edu
CPSC 350-02
Assignment 5*/


#include "Database.h"
#include <iostream>
#include <fstream>


Database::Database(){
  cout << "loading database..." <<endl;
}


Database::~Database(){

}

void Database::runProgram(){
  int userSelection;
	bool exit = false;
  //while user doesn't want to quit program
	while (!exit)
	{
		cout << flush; // Flushes the stream to make sure that the screen is clear
		system("CLS"); //https://mathbits.com/MathBits/CompSci/Screen/clear.htm
		printMenu();
		cin >> userSelection;
		switch (userSelection)
		{
		case 1:
			printStudents();
			break;
		case 2:
			printFaculty();
			break;
		case 3:
			findStudent();
			break;
		case 4:
			findFaculty();
			break;
		case 5:
			getStudentAdvisor();
			break;
		case 6:
			getFacultyAdvisees();
			break;
		case 7:
			addNewStudent();
			break;
		case 8:
			deleteStudent();
			break;
		case 9:
			addNewFaculty();
			break;
		case 10:
			deleteFaculty();
			break;
		case 11:
			changeAdvisor();
			break;
		case 12:
			removeAdvisee();
			break;
		case 13:
			rollback();
			break;
		case 14:
			exit = true;
			cout << "exiting program..." << endl;
			break;
		default:
			cout << endl << "Invalid selection..." << endl;
			system("Pause");
			break;
		}
	}
}

void Database::printMenu(){
  cout << "1. Print all students and their information (sorted by ascending id #)" << endl;
  cout << "2. Print all faculty and their information (sorted by ascending id #)" << endl;
  cout <<  "3. Find and display student information given the students id" << endl;
  cout <<  "4. Find and display faculty information given the faculty id" << endl;
  cout <<  "5. Given a student's id, print the name and info of their faculty advisor" << endl;
  cout <<  "6. Given a faculty id, print ALL the names and info of his/her advisees." << endl;
  cout <<  "7. Add a new student" << endl;
  cout <<  "8. Delete a student given the id" << endl;
  cout <<  "9. Add a new faculty member" << endl;
  cout <<  "10. Delete a faculty member given the id." << endl;
  cout <<  "11. Change a student's advisor given the student id and the new faculty id." << endl;
  cout <<  "12. Remove an advisee from a faculty member given the ids" << endl;
  cout <<  "13. Rollback" << endl;
  cout << "14. Exit" << endl;
}

void Database::printStudents()
{
	cout << "printing all students..." << endl;
	system("Pause");
}

void Database::printFaculty()
{
	cout << "printing all faculty..." << endl;
	system("Pause");
}
void Database::findStudent()
{
  int findStudID;
	cout << "Enter a student id to find a student" << flush;
  cin >> findStudID;
  cout << "finding student with ID " << findStudID << " ..." << flush;
	system("Pause");
}
void Database::findFaculty()
{
  int findFacID;
	cout << "Enter a faculty id to find a faculty member" << endl;
  cin >> findFacID;
  cout << "finding faculty with ID " << findFacID << " ..." << endl;
	system("Pause");
}
void Database::getStudentAdvisor()
{
  int studentID;
	cout << "Enter the ID of the student you want to find the advisor of" << endl;
  cin >> studentID;
  cout << "searching for the advisor of student " << studentID << " ..." << endl;
  //
	system("Pause");
}
void Database::getFacultyAdvisees()
{
  int fID = 0;
  cout << "enter the ID of the faculty you want to fetch the advisees of " << endl;
  cin >> fID;
	cout << "Fetching te advisees of faculty with ID " << endl;
	system("Pause");
}
void Database::addNewStudent()
{
  int studId;
	string studName, studMajor, studLev;
	cout << "Enter an Id for this new student, if invalid because of current use we will let you know: " << endl;
	cin >> studId;
	cout << "Enter a name:" << endl;
	cin >> studName;
	cout << "Enter a major" << endl;
	cin >> studMajor;
	cout << "Enter a year" << endl;
	cin >> studLev;
	cout << "Adding new student to studentTable..." << endl;
	system("Pause");
}
void Database::deleteStudent()
{
  int studID;
  cout << "Enter the ID of the student you want to delete" << endl;
  cin >> studID;
	cout << "deleting student "<< studID << " from the studentTable..." << endl;
	system("Pause");
}

void Database::addNewFaculty()
{
	int facId;
	string facName, facDep, facLev;
	cout << "Enter an Id for this new faculty member: " << endl;
	cin >> facId;
	cout << "Enter a name:" << endl;
	cin >> facName;
	cout << "Enter a department" << endl;
	cin >> facDep;
	cout << "Enter a career level" << endl;
	cin >> facLev;

	cout << "Adding new faculty to facultyTable..." << endl;
	system("Pause");
}
void Database::deleteFaculty()
{
	int facId;
	cout << "Please enter the ID of the Faculty member you wish to delete: " << endl;
	cin >> facId;
	cout << "Deleting faculty with ID "<< facId << " from facultyTable..." << endl;

	system("Pause");
}
void Database::changeAdvisor()
{
	int stuId = 0;
  int facId = 0;
	cout << "Please enter the ID of the Student record you wish to alter: " << endl;
	cin >> stuId;

	cout << "Please enter the ID of the Faculty member you wish to be the advisor: " << endl;
	cin >> facId;

  cout << "Now swapping the faculty advisor of student " << stuId << " ..." << endl;
	system("Pause");
}
void Database::removeAdvisee()
{
	cout << flush;
	system("CLS");
	int facId;
  int stuId;
	bool valid = false;
	cout << "Please enter the ID of the Faculty member record you wish to modify: " << endl;
	cin >> facId;
		/*if (db.facultyTable.search(facId))
			valid = true;
		}
		else
		{
			cout << "\nThat is an invalid entry, try again: " << endl;
		}*/
	cout << "\nPlease enter the ID of the Student you wish to remove from this advisor: " << endl;
	cin >> stuId;
		/*if (db.studentTable.search(stuId))
		{
			valid = true;
		}
		else
		{
			cout << "\nThat is an invalid entry, try again: " << endl;
		}*/
	cout << "deleting student from advisor.. " << endl;
	//db.facultyTable.RemoveAdvisee(stuId);
	//db.studentTable.RemoveAdviser();



	//db.facultyTable
	system("Pause");
}

void Database::rollback(){
  cout << "rolling back to the previous positon.." << endl;
}
