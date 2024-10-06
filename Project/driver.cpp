#include <iostream>
#include "Student_Staff.h"
using namespace std;

int main(void)
{


    Student_Staff university;
    Staff uni_employee;
    Student uni_student;

    university.readStudentsFromFile("student.txt");
    university.readStaffFromFile("staff.txt");


    cout << "Testing Student_Staff class functions: \n\n";

    university.Highest_GPA(university.students, 5);

    int N = university.N_of_UnderGrad(university.students, 5);
    cout << "\nNumber of Undergraduate students are:  " << N << endl << endl;

    university.Same_Hire_Year(university.staff, 5, 2015);

    cout << "\nTesting Student and Staff class functions: \n\n";

    cout << "Printing out the attributes of one staff member: \n";
    //There are two ways of printing the attributes:
    //Number 1:
        Staff* staff = university.staff;
        int numStaff = university.numStaff;
            for (int i = 0; i < 1; ++i)
            {
                cout << "First Name: " << staff[i].firstName << "  Last Name: " << staff[i].lastName << "  Staff ID: " << staff[i].staffID << "  Salary: "
                	<< staff[i].salary << "  Date of hiring: " << staff[i].datehire << "  Bonus Code: " << staff[i].bonuscode << "\nOR\n";
            }
    //Number 2:
            uni_employee.Print_Stf_Info(staff);


            cout << "\n\nPrinting out the new salaries after bonus for each staff member: \n";
            //There are two ways of printing the new salaries:

            //Number 1:
            for(int i = 0; i < numStaff; i++)
            {
    	       char bonus_code = staff[i].bonuscode;
    	       double bonus;

    	      switch(bonus_code)
    	      {
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

    	       cout << "The new salary is: " << (staff[i].salary + staff[i].salary*bonus) << endl;
            }

            //Number 2:
            for(int i = 0; i < numStaff; i++)
            {
                double new_salary = uni_employee.Calculate_Salary(staff);
                cout << " " << new_salary << endl;

            }



}



