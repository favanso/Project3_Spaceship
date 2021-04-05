#include <iostream>
#include "Spaceship.h"
#include <string>
#include<fstream>
#include <vector>
#include<stdlib.h>

using namespace std;

int main() {
	ifstream infile;
	string word;
	string shipName;
	string captainName;
	int shieldStrength;
	int numPhasers;
	int numPhotons;
	vector<Spaceship*> myVector;
	
	infile.open("ships.txt");
	if (infile.is_open()) {
		while (!infile.eof())
		{
		infile >> shipName >> captainName >> shieldStrength >> numPhasers >> numPhotons;
		
		Spaceship* tempPtr = new Spaceship(shipName, captainName, shieldStrength, numPhasers, numPhotons);
		
		myVector.push_back(tempPtr);
		
		}

		infile.close();

	}
	else {
		cout << "failed to open the file." << endl;
	}
	
	int size = myVector.size();
	for (int i = 0; i < size; i++) {

		
		myVector[i]->printShip();
		
		int hit;
		hit = rand() % 100;
		myVector[i]->takeDamage(hit);
		delete myVector[i];
	}



	return 0;
}
