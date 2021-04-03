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
	vector<Spaceship*> spaceShips;
	vector<string> words;


	file.open("ships.txt");
	if (file.is_open()) {
		while (file >> word) {
			words.push_back(word);
			cout << std::word;
		}
		int sizeWord = word.size();
		cout << sizeWord<< endl;
		
		/*for (int i = 0; i < sizeWord; i++) {

		}*/

			
			//spaceship = new Spaceship(words[1]);
			//spaceShips.push_back(Spaceship)
		
		file.close();
	}
	else {
		cout << "failed to open the file." << endl;
	}
	






	//Loop the vector of pointers
	//for (int test : spaceShips){
		//cout << "Starship " << &spaceShip.getShipName << " is captained by " << &spaceShip.getCaptainName <<
		// ". It has shield strenght of " << &spaceShip.getShieldStrenght << ", "<< &spaceShip.getNumPhasers<<" phasers, and "
		// <<  &spaceShip.getNumPhotons<<" photon torpedoes.";}
	
	
	
	//delete spaceshipPoint;
	
	return 0;
}