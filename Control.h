#ifndef CONTROL_H
#define CONTROL_H

//#include "Airport.h"
#include "Flight.h"

#include <string>
#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

class Control{
	private:
	//	vector<Airport> cities; //The list of all of the cities. For accessing the nodes themselves
	


//We could have a vector of names of the departure cities
//When the customer specifies a departure city, use that name's position to go to the vector of vector flights to look up all of the flights from that city
//So, instead of a matrix, which could have a bunch of empty spots, we are using a moldable "vector matrix" that will grow to accomodate our needs

		//so, here we will have a vector of vectors
		//The order of the top set of vectors will mimic the order of the cities vector
		//Each vector will have the information about all of the flights corresponding to a city
	
	
	vector<vector<Flight>> flights;
	



	public:
		Control();
		Control(string file);
//		Flight findflight();

};
#endif
