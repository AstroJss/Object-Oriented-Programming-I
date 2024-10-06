//Q1
//<Eithan Kuri Valdovinos_40295748>
//<Jasdeep S. Sandhu_40266557>

#pragma once

#include <iostream>
#include <iomanip>
using namespace std;

class Employee
{

public:

    Employee();
	Employee(int id, const string& firstName, const string& lastName, const string& dob,
	const string& address, int yearHired, double salary, int areaCode, const string& telephone);
	    int get_employee_id() const;
	    string get_first_name() const;
	    void set_first_name(const string& firstName);
	    string get_last_name() const;
	    void set_last_name(const string& lastName);
	    int get_year_hired() const;
	    string get_full_name() const;
	    string get_dob() const;
	    void set_dob(const string& dob);
	    double get_salary() const;
	    void set_salary(double salary);
	    string get_address() const;
	    void set_address(const string& address);
	    string get_telephone() const;
	    void set_telephone(int areaCode, const string& telephone);
	    bool same_names(const Employee& o2) const;
	    bool same_salary_or_year(const Employee& o2) const;

private:
	int employee_id_var;
	string first_name_var, last_name_var;
	int year_hired_var;
	string date_of_birth_var;
	double salary_var;
	string address_var, telephone_var;
	int area_code_var;

};

