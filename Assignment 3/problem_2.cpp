/*COEN 243 Assignment 3
      Question 2
Name: Eithan Kuri Valdovinos_40295748
Name: Jasdeep S. Sandhu_40266557*/

#include <string>
#include <iostream>
using namespace std;

bool testPalindrome(string x, size_t str , size_t end)
{



// base case
	if (str >= end)
		return true;


	// recursive case
	else if (x[str] == x[end])
		return testPalindrome(x, str + 1, end - 1);

	// if string not a palindrome
	else
		return false;
}




int main() {

	string x;


	cout << "Please provide your string: \n";
	getline(cin, x);



	if (testPalindrome(x, 0, x.size() - 1))
	cout << "Your string is a palindrome";

	else
	cout << "Your string is not a palindrome";

	return 0;
}

