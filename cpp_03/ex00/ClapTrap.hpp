#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

using std::string; using std::cout; using std::endl;

class ClapTrap {
private:
	string name;
	int hitPoint;
	int energyPoint;
	int power;

	bool isDead( void );
	bool isNoEnergy( void );
	void energyDec(unsigned int amount);
	void hpDec(unsigned int amount);
	void hpInc(unsigned int amount);

public:
	ClapTrap();
	ClapTrap(string name);
	ClapTrap(const ClapTrap& ref);
	~ClapTrap();
	ClapTrap& operator=(const ClapTrap& ref);

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif