#ifndef SPACESHIP_H
#define SPACESHIP_H
#include <string>

class Spaceship
{
private:
	std::string shipName;
	std::string captainName;
	int shieldStrenght;
	int numPhasers;
	int numPhotons;

public:
	Spaceship(std::string shipName, std::string captainName, int shieldStrenght, int numPhasers, int numPhotons);

	std::string getShipName() const;

	std::string getCaptainName() const;

	int getShieldStrenght();

	int getNumPhasers();

	int getNumPhotons();

	void takeDamage(int damage);

};
#endif 

