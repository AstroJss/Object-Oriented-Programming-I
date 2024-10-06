#include <iostream>
#include<cmath>
using namespace std;

int main()
  {

	double income;

	cout<<"Enter your income: ";
	cin>>income;

	if(income>=110000)
		cout<<"\nTax Portion: "<<0.45*income<<"\nNet Income: "<<income-(0.45*income);
	else if (income<110000 && income>=90000)
		cout<<"\nTax Portion: "<<0.35*income<<"\nNet Income: "<<income-(0.35*income);
	else if (income<90000 && income>=70000)
		cout<<"\nTax Portion: "<<0.25*income<<"\nNet Income: "<<income-(0.25*income);
	else if (income<70000 && income>=40000)
		cout<<"\nTax Portion: "<<0.15*income<<"\nNet Income: "<<income-(0.15*income);
	else if (income<40000)
		cout<<"\nTax Portion: "<<0.05*income<<"\nNet Income: "<<income-(0.05*income);
	else
		cout<<"\nEnter a valid income";


	return 0;
  }
