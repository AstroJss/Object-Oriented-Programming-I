//Q1
//<Eithan Kuri Valdovinos_40295748>
//<Jasdeep S. Sandhu_40266557>

#include <iostream>
#include "employee.h"
using namespace std;

int main() {
    int id, yearHired, areaCode;
    double salary;
    string firstName, lastName, dob, address, telephone;

    cout << "Enter details for Employee 1" << endl;
    cout << "Employee ID: "; cin >> id;
    cout << "First Name: "; cin >> firstName;
    cout << "Last Name: "; cin >> lastName;
    cout << "Date of Birth: "; cin >> dob;
    cout << "Address: "; cin >> address;
    cout << "Year Hired: "; cin >> yearHired;
    cout << "Salary: "; cin >> salary;
    cout << "Area Code: "; cin >> areaCode;
    cout << "Telephone: "; cin >> telephone;
    Employee E1(id, firstName, lastName, dob, address, yearHired, salary, areaCode, telephone);

    cout << "Enter details for Employee 2" << endl;
    cout << "Employee ID: "; cin >> id;
    cout << "First Name: "; cin >> firstName;
    cout << "Last Name: "; cin >> lastName;
    cout << "Date of Birth: "; cin >> dob;
    cout << "Address: "; cin >> address;
    cout << "Year Hired: "; cin >> yearHired;
    cout << "Salary: "; cin >> salary;
    cout << "Area Code: "; cin >> areaCode;
    cout << "Telephone: "; cin >> telephone;
    Employee E2(id, firstName, lastName, dob, address, yearHired, salary, areaCode, telephone);


    cout << "\nTesting Employee 1's member functions:" << endl;
    cout << "Employee ID: " << E1.get_employee_id() << endl;
    cout << "First Name: " << E1.get_first_name() << endl;
    E1.set_first_name("UpdatedFirstName1");
    cout << "Modified First Name: " << E1.get_first_name() << endl;
    cout << "Last Name: " << E1.get_last_name() << endl;
    E1.set_last_name("UpdatedLastName1");
    cout << "Modified Last Name: " << E1.get_last_name() << endl;
    cout << "Year Hired: " << E1.get_year_hired() << endl;
    cout << "Full Name: " << E1.get_full_name() << endl;
    cout << "Date of Birth: " << E1.get_dob() << endl;
    E1.set_dob("2000-01-01");
    cout << "Modified Date of Birth: " << E1.get_dob() << endl;
    cout << "Salary: " << E1.get_salary() << endl;
    E1.set_salary(75000.50);
    cout << "Modified Salary: " << E1.get_salary() << endl;
    cout << "Address: " << E1.get_address() << endl;
    E1.set_address("Updated Address 1");
    cout << "Modified Address: " << E1.get_address() << endl;
    cout << "Telephone: " << E1.get_telephone() << endl;
    E1.set_telephone(123, "7654321");
    cout << "Modified Telephone: " << E1.get_telephone() << endl;

    cout << "\nTesting Employee 2's member functions:" << endl;
    cout << "Employee ID: " << E2.get_employee_id() << endl;
    cout << "First Name: " << E2.get_first_name() << endl;
    E2.set_first_name("UpdatedFirstName2");
    cout << "Modified First Name: " << E2.get_first_name() << endl;
    cout << "Last Name: " << E2.get_last_name() << endl;
    E2.set_last_name("UpdatedLastName2");
    cout << "Modified Last Name: " << E2.get_last_name() << endl;
    cout << "Year Hired: " << E2.get_year_hired() << endl;
    cout << "Full Name: " << E2.get_full_name() << endl;
    cout << "Date of Birth: " << E2.get_dob() << endl;
    E2.set_dob("1990-02-02");
    cout << "Modified Date of Birth: " << E2.get_dob() << endl;
    cout << "Salary: " << E2.get_salary() << endl;
    E2.set_salary(80000.75);
    cout << "Modified Salary: " << E2.get_salary() << endl;
    cout << "Address: " << E2.get_address() << endl;
    E2.set_address("Updated Address 2");
    cout << "Modified Address: " << E2.get_address() << endl;
    cout << "Telephone: " << E2.get_telephone() << endl;
    E2.set_telephone(456, "1234567");
    cout << "Modified Telephone: " << E2.get_telephone() << endl;

    cout << "\nComparing Employees:" << endl;
    if (E1.same_names(E2)) {
        cout << "Employees have the same last name." << endl;
    } else {
        cout << "Employees have different last names." << endl;
    }

    if (E1.same_salary_or_year(E2)) {
        cout << "Employees have the same salary or were hired in the same year." << endl;
    } else {
        cout << "Employees have different salaries and were hired in different years." << endl;
    }

    return 0;
}
