#include <iostream>
#include "Spaceship.h"
#include <string>
#include<fstream>
#include <vector>
#include<stdlib.h>

using namespace std;

int main() {
	ifstream file;
	string word;
	vector<string> wordVector;


	file.open("ships.txt");
	if (file.is_open()) {
		while (file >> word) {
			wordVector.push_back(word);
		}
		file.close();
	}
	else {
		cout << "failed to open the file." << endl;
	}

	Spaceship *spacePoint;
	Spaceship *spacePoint2;
	Spaceship *spacePoint3;
	

	spacePoint = new Spaceship (wordVector[0], wordVector[1], stoi(wordVector[2]), stoi(wordVector[3]), stoi(wordVector[4]));
	spacePoint2 = new Spaceship(wordVector[5], wordVector[6], stoi(wordVector[7]), stoi(wordVector[8]), stoi(wordVector[9]));
	spacePoint3 = new Spaceship(wordVector[10], wordVector[11], stoi(wordVector[12]), stoi(wordVector[13]), stoi(wordVector[14]));

	vector<Spaceship*> spaceshipVec;
	spaceshipVec.push_back(spacePoint);
	spaceshipVec.push_back(spacePoint2);
	spaceshipVec.push_back(spacePoint3);


	for (Spaceship* space : spaceshipVec){

		cout << "Starship " << space->getShipName() << " is captained by " << space->getCaptainName() <<
		". It has shield strenght of " << space->getShieldStrenght() << ", " << space->getNumPhasers() << " phasers, and "
		<< space->getNumPhotons() << " photon torpedoes." << endl;
		
		int hit;
		hit = rand() % 100;
		space->takeDamage(hit);
		
	}
	
	delete spacePoint;
	delete spacePoint2;
	delete spacePoint3;

	
	return 0;
}