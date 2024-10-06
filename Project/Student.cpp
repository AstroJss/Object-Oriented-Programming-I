#include <iostream>
#include <string>
#include "Student.h"
using namespace std;

// 8 getters
string Student::get_first_name()
{
	return first_name;
}

string Student::get_last_name()
{
	return last_name;
}

string Student::get_Date_of_birth()
{
	return Date_of_birth;
}

int Student::get_id()
{
	return id;
}

int Student::get_start_year()
{
	return start_year;
}

int Student::get_completed_credit()
{
	return completed_credit;
}

double Student::get_GPA_to_the_date()
{
	return GPA_to_the_date;
}

char Student::get_Program()
{
	return Program;
}

// 8 setters
void Student::set_first_name(string fn)
{
	first_name = fn;
}

void Student::set_last_name(string ln)
{
	last_name = ln;
}

void Student::set_Date_of_birth(string dob)
{
	Date_of_birth = dob;
}

void Student::set_id(int i)
{
	id = i;
}

void Student::set_start_year(int sy)
{
	start_year = sy;
}

void Student::set_completed_credit(int cc)
{
	completed_credit = cc;
}

void Student::set_GPA_to_the_date(double gttd)
{
	GPA_to_the_date = gttd;
}

void Student::set_Program(char p)
{
	Program = p;
}

bool Student::CompleteProgram()
{
	if (Program == 'B')
		return (completed_credit == 140);

	else if (Program == 'M')
		return (completed_credit == 16);

	else
		return (completed_credit == 12);
}

string Student:: StudentStatus()
{
	if (GPA_to_the_date >= 3.5)
		return "A+";

	else if ((GPA_to_the_date < 3.5) && (GPA_to_the_date >= 3))
		return "A";

	else if ((GPA_to_the_date < 3) && (GPA_to_the_date >= 2.5))
		return "B";

	else if ((GPA_to_the_date < 2.5) && (GPA_to_the_date >= 2))
		return "C";

	else
		return "D";
}


void Student::Print_Std_Info()
{
	cout << "student first name: " << first_name
		<< "student first name: " << last_name
		<< "student id: " << id
		<< "date of birth: " << Date_of_birth
		<< "GPA to the date: " << GPA_to_the_date
		<< "start year: " << start_year
		<< "completed credit: " << completed_credit
		<< "Program: " << Program;
}
