/* Building.cpp  */


#include <iostream>
using std::cout;
using std::endl;

#include "Building.h"

Building::Building(int numberOfFloors) :
		floors(numberOfFloors, Floor()) {
	cout << "Creating building with " << numberOfFloors << " floors." << endl;
}

Building::~Building() {
	cout << "Destroying building." << endl;
}

void Building::runSimulation() {
	cout << "Simulation running ..." << endl;
	// ...
}
