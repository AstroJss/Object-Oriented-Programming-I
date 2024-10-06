#include <iostream>
#include <string>
using namespace std;

int main()
  {

	int input, pass, code;
	string name;

	cout<<"Choose one of the following options:\n1- Login with Username and Password\n2- Login with Username and security code";
    cout<<"\n\nEnter 1 or 2 here: ";
    cin>>input;

    if(input == 1)
       {cout<<"\nEnter the Username: "; cin>>name;
        cout<<"Enter the password: "; cin>>pass;
        if(pass == 4444)
        	cout<<"\nSuccessful Login";
        else
        	cout<<"\nInvalid Login. Try again!";}
    else if(input == 2)
    	{cout<<"\nEnter the Username: "; cin>>name;
         cout<<"Enter the security code: "; cin>>code;
         if(code == 6654)
        	 cout<<"\nSuccessful Login";
        	         else
        	         	cout<<"\nInvalid Login. Try again!";}

    	}




