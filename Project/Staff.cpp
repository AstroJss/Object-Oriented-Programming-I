#include <iostream>
#include <string>
#include "Staff.h"
using namespace std;

/*Staff::Staff(string fn, string ln, int id, int sal, string dh, char bonus)
{
    firstName = fn;
    lastName = ln;
    staffID = id;
    salary = sal;
    datehire = dh;
    bonuscode = bonus;
}*/


// 8 getters
string Staff:: get_firstName()
{
	return firstName;
}

string Staff:: get_lastName()
{
	return lastName;
}

string Staff::get_datehire()
{
	return datehire;
}

int Staff::get_staffID()
{
	return staffID;
}

int Staff:: get_salary()
{
	return salary;
}

char Staff::get_bonuscode()
{
	return bonuscode;
}




// 8 setters
void Staff:: set_firstName(string fN)
{
	firstName = fN;
}

void Staff::set_lastName(string lN)
{
	lastName = lN;
}

void Staff:: set_datehire(string dh)
{
	datehire = dh;
}

void Staff:: set_staffID(int sID)
{
	staffID = sID;
}

void Staff::set_salary(int sal)
{
	salary = sal;
}

void Staff:: set_bonuscode(char bc)
{
	bonuscode = bc;
}






// calculate salary based on bonus
double Staff:: Calculate_Salary(Staff* staffArray)
{
	char bonus_code = staffArray->bonuscode;
	double bonus;

	switch (bonuscode) {

	case 'A':
		bonus = 0.08;
		break;

	case 'B':
		bonus = 0.06;
		break;

	case 'C':
		bonus = 0.03;
		break;

	case 'D':
		bonus = 0.01;
		break;

	case 'E':
		bonus = 0;
		break;
	}

	return (salary + salary * bonus);
}

void Staff::Print_Stf_Info(Staff* staffArray)
{
	cout << "employee first name: " << staffArray->firstName << endl
		<< "employee last name: " << staffArray->lastName << endl
		<< "employee ID: " << staffArray->staffID << endl
		<< "date of hiring: " << staffArray->datehire << endl
		<< "bonus code: " << staffArray->bonuscode << endl
		<< "current salary: " << staffArray->salary;
}
