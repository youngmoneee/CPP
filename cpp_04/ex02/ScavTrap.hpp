#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

using std::string; using std::cout; using std::endl;

class ScavTrap : public ClapTrap {

public:
	ScavTrap();
	ScavTrap(string name);
	ScavTrap(const ScavTrap& ref);
	~ScavTrap();
	ScavTrap& operator=(const ScavTrap& ref);

	void attack(const std::string& target);
	void guardGate( void );
};

#endif