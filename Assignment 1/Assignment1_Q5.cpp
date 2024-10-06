#include <iostream>
using namespace std;

int main()
  {

	double height, weight;

	cout<<"Enter your height (in meters): ";
	cin>>height;

	cout<<"Enter your weight (in kilograms): ";
	cin>>weight;

	cout<<"Your BMI is "<<weight/(height*height);

	return 0;
  }



