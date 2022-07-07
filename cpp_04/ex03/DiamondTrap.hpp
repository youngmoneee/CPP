#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

using std::string; using std::cout; using std::endl;

class DiamondTrap : public ScavTrap, public FragTrap {
private:
	string name;

public:
	DiamondTrap();
	DiamondTrap(string name);
	DiamondTrap(const DiamondTrap& ref);
	~DiamondTrap();
	DiamondTrap& operator=(const DiamondTrap& ref);

	using ScavTrap::attack;

	void whoAmI() const;
};

#endif