//Q1
//<Eithan Kuri Valdovinos_40295748>
//<Jasdeep S. Sandhu_40266557>

#include "department.h"

// Constructor implementations
Department::Department() : id(""), name(""), history(""), employee_count(0) {}

Department::Department(const string& id, const string& name, const string& history)
    : id(id), name(name), history(history), employee_count(0) {}

// Getter and setter implementations
string Department::get_id() const {
    return id;
}

string Department::get_name() const {
    return name;
}

void Department::set_name(const string& name) {
    this->name = name;
}

string Department::get_history() const {
    return history;
}

void Department::set_history(const string& history) {
    this->history = history;
}

// Employee management implementations
bool Department::add_employee(const Employee& employee) {
    if (employee_count < 25) {
        employees[employee_count] = employee;
        employee_count++;
        return true;
    }
    return false;
}

bool Department::remove_employee(int employee_id) {
    for (int i = 0; i < employee_count; i++) {
        if (employees[i].get_employee_id() == employee_id) {
            for (int j = i; j < employee_count - 1; j++) {
                employees[j] = employees[j + 1];
            }
            employee_count--;
            return true;
        }
    }
    return false;
}

bool Department::search_employee(int employee_id) const {
    for (int i = 0; i < employee_count; i++) {
        if (employees[i].get_employee_id() == employee_id) {
            return true;
        }
    }
    return false;
}

void Department::output_employees() const {
    for (int i = 0; i < employee_count; i++) {
        cout << "Employee ID: " << employees[i].get_employee_id() << endl;
        cout << "Full Name: " << employees[i].get_full_name() << endl;
        cout << "Date of Birth: " << employees[i].get_dob() << endl;
        cout << "Address: " << employees[i].get_address() << endl;
        cout << "Year Hired: " << employees[i].get_year_hired() << endl;
        cout << "Salary: " << employees[i].get_salary() << endl;
        cout << "Telephone: " << employees[i].get_telephone() << endl;
        cout << "----------------------------------------" << endl;
    }
}

int Department::get_employee_count() const {
    return employee_count;
}


