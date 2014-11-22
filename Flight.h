//Flight is an object that contains all of the information aobut a single flight
//flight objects will be held in vectors of vectors inside the control center

#ifndef FLIGHT_H
#define FLIGHT_H

//#include "Date.h"
#include <string>
#include <iostream>
using namespace std;

class Flight{
	private:
		string depcity;
		string arrcity;
//		Date depdate;
//		Date arrdate;
		int triptime;
		int price;

	public:
		Flight(string depname, string arrname,/* Date deptime, Date arrtime,*/ int flightprice);
		string getdepcity();
		string getarrcity();
		int gettriptime();
		int getprice();
		friend ostream& operator<<(ostream &out, Flight &f);	
};
#endif
