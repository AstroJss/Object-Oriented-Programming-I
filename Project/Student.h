//Students and staff classes.
#pragma once
#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
	// 8 getters
	string get_first_name();
	string get_last_name();
	string get_Date_of_birth();
	int get_id();
	int get_start_year();
	int get_completed_credit();
	double get_GPA_to_the_date();
	char get_Program();

	// 8 setters
	void set_first_name(string);
	void set_last_name(string);
	void set_Date_of_birth(string);
	void set_id(int);
	void set_start_year(int);
	void set_completed_credit(int);
	void set_GPA_to_the_date(double);
	void set_Program(char);

	// This function returns true if the student has finished all the courses by comparing the completed credits
	// with the required credit for the program that the student is enrolled in.
	bool CompleteProgram();

	string StudentStatus();

	// This function prints out all the information of one student(all the attributes).
	void Print_Std_Info();


	// attributes
	string first_name, last_name, Date_of_birth;
	int id, start_year, completed_credit;
	double GPA_to_the_date; //(Range : 0 - 4.4)
	char Program; //(B : bachelor, M : master’s, P : Ph.D


};
