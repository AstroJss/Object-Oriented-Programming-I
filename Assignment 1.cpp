#include <iostream>
#include<cmath>
using namespace std;

int main()
  {

	int num1, num2;

	cout<<"Enter the first number: ";
	cin>>num1;

	cout<<"Enter the second number: ";
    cin>>num2;

    cout<<"\nThe results are:\n\nDifference: "<<num1-num2<<"\nProduct: "<<num1*num2<<
    		"\nDivision: "<<(double)num1/num2<<"\nAverage: "<<((double)num1+num2)/2<<"\nSum of Squares: "<<
			((num1*num1)+(num2*num2));

	return 0;
  }
