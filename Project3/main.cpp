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




	file.open("ships.txt");
	if (file.is_open()) {
		while (file >> word) {
			cout << word << endl;
			//Arrray of words and loop in the array to use for 
			//spaceship = new Spaceship(line);
			//spaceShips.push_back(Spaceship)
		}
		file.close();
	}
	else {
		cout << "failed to open the file." << endl;
	}
	
	//Loop throw the vector
	
	//for (int test : spaceShips)
		//cout << Starship << " ";
	
	
	
	//delete spaceshipPoint;
	
	return 0;
}