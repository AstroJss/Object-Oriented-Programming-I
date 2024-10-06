#include <iostream>
using namespace std;

int main()
  {

	int w1, w2, w3, w4, w5;
	char g1, g2, g3, g4, g5, unit1;
	unit1 = 'G';

    cout<<"Enter five weights (G for grams and k for kilograms):\n\n";
	cout<<"Enter the first weight: "; cin>>w1; cout<<""; cin>>g1;
	cout<<"Enter the second weight: "; cin>>w2; cout<<""; cin>>g2;
	cout<<"Enter the third weight: "; cin>>w3; cout<<""; cin>>g3;
	cout<<"Enter the fourth weight: "; cin>>w4; cout<<""; cin>>g4;
	cout<<"Enter the fifth weight: "; cin>>w5; cout<<""; cin>>g5;

    if (g1 == unit1)
    	cout<<""<<w1<<" G converts to "<<0.001*w1<<" k\n";
    else
    	cout<<""<<w1<<" k converts to "<<1000*w1<<" G\n";
    if (g2 == unit1)
        cout<<""<<w2<<" G converts to "<<0.001*w2<<" k\n";
    else
        cout<<""<<w2<<" k converts to "<<1000*w2<<" G\n";
    if (g3 == unit1)
        cout<<""<<w3<<" G converts to "<<0.001*w3<<" k\n";
    else
        cout<<""<<w3<<" k converts to "<<1000*w3<<" G\n";
    if (g4 == unit1)
        cout<<""<<w4<<" G converts to "<<0.001*w4<<" k\n";
    else
        cout<<""<<w4<<" k converts to "<<1000*w4<<" G\n";
    if (g5 == unit1)
        cout<<""<<w5<<" G converts to "<<0.001*w5<<" k\n";
    else
        cout<<""<<w5<<" k converts to "<<1000*w5<<" G\n";



return 0;
  }
