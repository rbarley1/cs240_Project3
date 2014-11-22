#include "Flight.h"


//Value constructor
Flight::Flight(string depname, string arrname, /*Date deptime, Date arrtime,*/ int flightprice){
	depcity = depname;
	arrcity = arrname;
//	depdate = deptime;
//	arrdate = arrtime;
	price = flightprice;
//	triptime = arrdate - depdate;
}



//Getters for the various fields of the flight
string Flight::getdepcity(){return depcity;}
string Flight::getarrcity(){return arrcity;}
int Flight::gettriptime(){return triptime;}
int Flight::getprice(){return price;}

ostream& operator<<(ostream &out, Flight &f){
	out << f.getdepcity() << " ";
	out << f.getarrcity() << " ";
//	out << depdate.gettime() << " ";
//	out << arrdate.gettime() << " ";
	out << "$" << f.getprice();
	out << '\n';
	return out;
}
