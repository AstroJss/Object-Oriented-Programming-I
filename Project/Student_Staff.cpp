#include "Student_Staff.h"
#include "Student.h"
#include "Staff.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void Student_Staff::readStudentsFromFile(const string& filename)
  {
       ifstream studentFile("student.txt");

       if (!studentFile)
       {
           cout << "Student file cannot be accessed!" << endl;
           return;
       }
       int numStudents;
       studentFile >> numStudents;
       students = new Student[numStudents];

       for (int i = 0; i < numStudents; ++i)
       {
           studentFile >> students[i].first_name >> students[i].last_name >> students[i].id
                       >> students[i].Date_of_birth >> students[i].GPA_to_the_date >> students[i].start_year
                       >> students[i].completed_credit >> students[i].Program;
       }

       studentFile.close();
   }

void Student_Staff::readStaffFromFile(const string& filename)
{
	ifstream staffFile(filename);

	if(!staffFile)
		cout << "Staff file cannot be accessed!" << endl;

	staffFile >> numStaff;
	staff = new Staff[numStaff];

	for(int i=0; i < numStaff; ++i)
	{
		staffFile >> staff[i].firstName >> staff[i].lastName >> staff[i].staffID
                  >> staff[i].datehire >> staff[i].bonuscode >> staff[i].salary;
	}

	staffFile.close();

}



void Student_Staff::Highest_GPA(Student* studentsArray, int size)
  {
        if (size == 0)
            cout << "The file contains zero students" << endl;

        int j = 0;
        for (int i = 1; i < size; ++i)
        {
            if (studentsArray[i].GPA_to_the_date > studentsArray[j].GPA_to_the_date) {
                j = i;
            }
        }

        cout << "Student with the Highest GPA is: \n";
        cout << "Name: " << studentsArray[j].first_name << " " << studentsArray[j].last_name << endl;
        cout << "GPA: " << studentsArray[j].GPA_to_the_date << endl;
    }

int Student_Staff::N_of_UnderGrad(Student* studentsArray, int size)
  {
        int count = 0;

        for (int i = 0; i < size; ++i) {
            if (studentsArray[i].Program == 'B') {
                ++count;
            }
        }
        return count;
    }

void Student_Staff::Same_Hire_Year(Staff* staffArray, int size, int year)
  {

       int j=0;
       cout << "Staff hired in " << year << " is: ";
       for (int i = 0; i < size; ++i)
       {
    	   string datehire = staffArray[i].datehire;
    	   //cout << " " << datehire;
    	   int hireYear = stoi(datehire.substr(0,4));

           if (hireYear == year) {
               cout << staffArray[i].firstName << " " << staffArray[i].lastName << endl;
               j=1;
           }
       }
       if (j==0) {
           cout << "No staff was hired in " << year << endl;
       }
   }





