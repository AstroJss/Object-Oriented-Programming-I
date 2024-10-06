/*COEN 243 Assignment 3
       Question 3
Name: Eithan Kuri Valdovinos_40295748
Name: Jasdeep_40266557*/

#include <iostream>
#include <array>
using namespace std;

int main() {
	int pos{ 0 }, choice;

	//declaring an initializing array
	array<char, 10> x;
	for (char &item: x)
			item = ' ';

	x[pos] = '^'; // Set the initial position of the robot



	for (size_t i{ 0 }; ; i++)
	{
		int dis{ 0 };


		cout << "\n\nPlease input your number of choice to control the robot from the controller menu\n"
			<< "\n1. Right\n2. Left\n3. Display\n4. Show Array\n5. Reboot\n6. Exit\n\n";
		cin >> choice;


		switch (choice)
		{

		case 1:
			cout << "How many positions would you like to move to the right: \n";
			cin >> dis;



			// out of bounds check
			if (pos + dis > 9)
			{
				cout << "You are going out of bounds, please try again";

			}
			//in bounds
			else
			{
				//clearing and updatinng position
				x[pos] = ' ';
				pos += dis;
				x[pos] = '^';
			}
			break;

		case 2:
			cout << "How many positions would you like to move to the left: \n";
			cin >> dis;


			// out of bounds check
			if (pos - dis < 0)
			{
				cout << "You are going out of bounds, please try again";
			}

			//in bounds
			else
			{
				//clearing and updatinng position
				x[pos] = ' ';
				pos -= dis;
				x[pos] = '^';
			}


			break;

			//display position
		case 3:
			cout << "Robot is in position " << pos;
			break;

			// show array
		case 4:
			   cout << "____________________________________________________________\n";
			   for (size_t i{ 0 }; i < x.size(); i++)
			   {
				   if (i == pos)
				   {
					   cout << "  ^  |";

				   }
				   else
				   {
					   cout << "     |";
				   }
			   }
			   cout << "\n_____|_____|_____|_____|_____|_____|_____|_____|_____|_____|\n"
				   << "\n0    1     2     3     4     5     6     7     8     9";

			break;


		case 5:      // Reboot to 0 position
			x[pos] = ' ';
			x[0] = '^';
			pos = 0;
			break;


		case 6:
			cout << "terminating program\n\n";
			return 0;
			break;

		default:
			cout << "Incorrect command, please try again";
		}
	}

		return 0;
}
