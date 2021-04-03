#include "Spaceship.h"
#include <string>
#include <iostream>

Spaceship::Spaceship(std::string shipName, std::string captainName, int shieldStrenght, int numPhasers, int numPhotons)
{
	this->shipName = shipName;
	this->captainName = captainName;
	this->shieldStrenght = shieldStrenght;
	this->numPhasers = numPhasers;
	this->numPhotons = numPhotons;
	
}

std::string Spaceship::getShipName() const {
	return shipName;
}

std::string Spaceship::getCaptainName() const {
	return captainName;
}

int Spaceship::getShieldStrenght() {
	return shieldStrenght;
}

int Spaceship::getNumPhasers() {
	return numPhasers;
}
int Spaceship::getNumPhotons() {
	return numPhotons;
}

void Spaceship::takeDamage(int damage) {
	
	int newShieldStrenght;
	newShieldStrenght = getShieldStrenght() - damage;
	
	if (newShieldStrenght == 0) {
		std::cout << "Ship has been destroyed" << std::endl;
	}
	else std::cout << shipName << " was hit with attack of "<< (getShieldStrenght()-newShieldStrenght) << 
		". Shields are now at " << newShieldStrenght << " percent." << std::endl<< std::endl;


}