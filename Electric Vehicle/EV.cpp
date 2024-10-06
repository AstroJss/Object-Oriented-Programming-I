#include "EV.h"


  //default constructor
  EV::EV() {
    range = 0;
    year = 0;
  }

  //parameterized constructor
  EV::EV(string m, int r, string u, int y) {
    model = m;
    range = r;
    unit = u;
    year = y;
  }

   //getters
   string EV::getModel() {
       return model;
   }
   int EV::getRange() {
	   return range;
   }
   string EV::getUnit() {
       return unit;
   }
   int EV::getYear() {
       return year;
   }

   //setters
   void EV::setModel(string nm) {
       model = nm;
   }
   void EV::setRange(int r) {
       range = r;
   }
   void EV::setUnit(string un) {
	   unit = un;
	}

	void EV::setYear(int y) {
	year = y;
	}

	void EV::info() {
	cout << "EV " << model << " manufactured in " << year << " has a range of " << range << " " << unit;
	}
	double EV::convert() {
	double result;
	if (unit == "Miles")
	result = range * 1.609;
	else if (unit == "Kilometers")
	result = range * 0.6214;
	return result;

	}
	void EV::compare(EV * other) {
	double result = this -> getRange();
	if (this -> getUnit() != other -> getUnit()) {
	result = this -> convert();
	}
	if (result > other -> getRange()) {
	this -> info();
	cout << "\ndrives longer distance on a single charge than\n";
	other -> info();
	} else if (result < other -> getRange()) {
	this -> info();
	cout << "\ndrives shorter distance on a single charge than\n";
	other -> info();
	} else {
	this -> info();
	cout << "\ndrives same distance on a single charge than\n";
	other -> info();
	}
	}


