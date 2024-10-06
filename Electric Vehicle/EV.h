#ifndef EV_H_
#define EV_H_
#include <iostream>
using namespace std;

class EV
{

public:
   EV(); //default constructor
   EV(string,int,string,int);
   string getModel();
   int getRange();
   string getUnit();
   int getYear();
   void setModel(string);
   void setRange(int);
   void setUnit(string);
   void setYear(int);
   double convert();
   void compare(EV *);
   void info();

private:
   string model;
   int range;
   string unit;
   int year;

};


#endif
