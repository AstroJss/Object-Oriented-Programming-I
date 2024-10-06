//Q1
//<Eithan Kuri Valdovinos_40295748>
//<Jasdeep S. Sandhu_40266557>

#pragma once
#include <iostream>
#include <string>
#include "employee.h"

using namespace std;

class Department {
public:
    Department();
    Department(const string& id, const string& name, const string& history);

    string get_id() const;
    string get_name() const;
    void set_name(const string& name);
    string get_history() const;
    void set_history(const string& history);

    bool add_employee(const Employee& employee);
    bool remove_employee(int employee_id);
    bool search_employee(int employee_id) const;
    void output_employees() const;
    int get_employee_count() const;

private:
    string id;
    string name;
    string history;
    Employee employees[25];
    int employee_count;
};
