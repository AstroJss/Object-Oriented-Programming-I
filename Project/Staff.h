// staff classes.
#pragma once
#include <iostream>
#include <string>
using namespace std;

class Staff
{
public:
    //Staff(string, string, int, int, string, char);
	// 8 getters
	string get_firstName();
	string get_lastName();
	string get_datehire();
	int get_staffID();
	int get_salary();
	char get_bonuscode();

	// 8 setters
	void set_firstName(string);
	void set_lastName(string);
	void set_datehire(string);
	void set_staffID(int);
	void set_salary(int);
	void set_bonuscode(char);


	// This function prints out all the information of one staff member(all the attributes).
	void Print_Stf_Info(Staff* staffArray);

	// calculate salary based on bonus
	double Calculate_Salary(Staff* staffArray);



	// attributes
	string firstName, lastName;
	int staffID, salary;
	string datehire;
	char bonuscode;
};
