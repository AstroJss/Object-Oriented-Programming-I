#include <iostream>

#include "EV.h"

using namespace std;
int main()
{
    EV firstEV, secondEV;
    string model, unit;
    int range, year;

    cout << "Load first EV\n";
    cout << "Enter EV model: ";

    getline(cin, model);

    cout << "Enter year manufactured: ";
    cin >> year;

    cout << "Enter range unit (Miles or Kilometers): ";
    cin >> unit;

    cout << "You choose " << unit << ", so please enter range in " << unit << ": ";
    cin >> range;

    firstEV.setModel(model);
    firstEV.setYear(year);
    firstEV.setUnit(unit);
    firstEV.setRange(range);

    cin.ignore();
    cout << "Load second EV\n";
    cout << "Enter EV model: ";

    getline(cin, model);
    secondEV.setModel(model);

    cout << "Enter year manufactured: ";
    cin >> year;
    secondEV.setYear(year);

    cout << "Enter range unit (Miles or Kilometers): ";
    cin >> unit;
    secondEV.setUnit(unit);

    cout << "You choose " << unit << ", so please enter range in " << unit << ": ";
    cin >> range;
    secondEV.setRange(range);

    //compare both the objects
    firstEV.compare( & secondEV);

return 0;
}


