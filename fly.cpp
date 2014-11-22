#include "Control.h"

#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main(int argc, char* argv[]){
	//No flight schedule
	if (argc == 1){
		cerr << "User did not specify a flight schedule. Exiting." << endl;
		return 1;
	}
	//Too many arguments
	else if(argc > 2){
		cerr << "Too many arguments - specify only one flight schedule. Exiting." << endl;
		return 1;
	}


	//Hooray!
	else{
		string flightfile = argv[1];
		ifstream fin(flightfile);
		if(!fin){
			cerr << "Could not open the file/file does not exist. Exiting. " << endl;
			return 1;
		}
		else {
			fin.close();
			Control control(flightfile);	
			cout << "Welcome to the Flight Discovery System!" << '\n';
//			Customer c;
//			c.askquestions();  or something
			



			//Now, we have all of our constraints/objectives
			//Next step: optimizing our constraint







		}
	}


};
