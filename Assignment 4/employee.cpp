//Q1
//<Eithan Kuri Valdovinos_40295748>
//<Jasdeep S. Sandhu_40266557>

#include "employee.h"
#include <iostream>
using namespace std;

Employee::Employee() : employee_id_var(0), year_hired_var(0), area_code_var(0), salary_var(0.0) {}

Employee::Employee(int id, const string& firstName, const string& lastName, const string& dob,
                   const string& address, int yearHired, double salary, int areaCode, const string& telephone) :
    employee_id_var(id), first_name_var(firstName), last_name_var(lastName), date_of_birth_var(dob),
    address_var(address), year_hired_var(yearHired), salary_var(salary), area_code_var(areaCode), telephone_var(telephone) {}

int Employee::get_employee_id() const {
    return employee_id_var;
}

string Employee::get_first_name() const {
    return first_name_var;
}

void Employee::set_first_name(const string& firstName) {
    first_name_var = firstName;
}

string Employee::get_last_name() const {
    return last_name_var;
}

void Employee::set_last_name(const string& lastName) {
    last_name_var = lastName;
}

int Employee::get_year_hired() const {
    return year_hired_var;
}

string Employee::get_full_name() const {
    return first_name_var + " " + last_name_var;
}

string Employee::get_dob() const {
    return date_of_birth_var;
}

void Employee::set_dob(const string& dob) {
    date_of_birth_var = dob;
}

double Employee::get_salary() const {
    return salary_var;
}

void Employee::set_salary(double salary) {
    salary_var = salary;
}

string Employee::get_address() const {
    return address_var;
}

void Employee::set_address(const string& address) {
    address_var = address;
}

string Employee::get_telephone() const {
    return to_string(area_code_var) + "-" + telephone_var;
}

void Employee::set_telephone(int areaCode, const string& telephone) {
    area_code_var = areaCode;
    telephone_var = telephone;
}

bool Employee::same_names(const Employee& o2) const {
    return last_name_var == o2.last_name_var;
}

bool Employee::same_salary_or_year(const Employee& o2) const {
    return year_hired_var == o2.year_hired_var || salary_var == o2.salary_var;
}
