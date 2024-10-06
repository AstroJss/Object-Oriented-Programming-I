#ifndef STUDENT_STAFF_H_
#define STUDENT_STAFF_H_

#include <iostream>
#include <fstream>
#include "Student.h"
#include "Staff.h"
using namespace std;

class Student_Staff {

public:

    Student* students;
    Staff* staff;
    int numStudents, numStaff;


    Student_Staff() : students(nullptr), staff(nullptr), numStudents(0), numStaff(0) {
        readStudentsFromFile("student.txt");
        readStaffFromFile("staff.txt");
    }

    ~Student_Staff() {
        delete[] students;
        delete[] staff;
    }

    void readStudentsFromFile(const string& filename);
    void readStaffFromFile(const std::string& filename);
    void Highest_GPA(Student* studentsArray, int size);
    int N_of_UnderGrad(Student* studentsArray, int size);
    void Same_Hire_Year(Staff* staffArray, int size, int year);
};

#endif
