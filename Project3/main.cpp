#include <iostream>
#include "Spaceship.h"
#include <string>
#include<fstream>
#include <vector>

using namespace std;

int main() {
	ifstream file;
	string word;
	
	//Spaceship *spaceshipPoint;
	//vector<spaceshipPoint*> spaceshipsVector;
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

	Spaceship spaceship1(wordVector[0], wordVector[1], stoi(wordVector[2]), stoi(wordVector[3]), stoi(wordVector[4]));
	Spaceship spaceship2(wordVector[5], wordVector[6], stoi(wordVector[7]), stoi(wordVector[8]), stoi(wordVector[9]));
	Spaceship spaceship3(wordVector[10], wordVector[11], stoi(wordVector[12]), stoi(wordVector[13]), stoi(wordVector[14]));

	vector<Spaceship*> spaceshipVec;
	spaceshipVec.push_back(&spaceship1);
	spaceshipVec.push_back(&spaceship2);
	spaceshipVec.push_back(&spaceship3);






	/*cout << "Starship " << spaceship1.getShipName() << " is captained by " << spaceship1.getCaptainName() <<
		". It has shield strenght of " << spaceship1.getShieldStrenght() << ", " << spaceship1.getNumPhasers() << " phasers, and "
		<< spaceship1.getNumPhotons() << " photon torpedoes." << endl;*/




	/*for (int i = 0; i < sizeWord; i++) {

	}*/


	//spaceShips.push_back(Spaceship)


	




	//Loop the vector of pointers
	//for (int test : spaceShips){
		
	
	
	
	//delete spaceshipPoint;
	
	return 0;
}