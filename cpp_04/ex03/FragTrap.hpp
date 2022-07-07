#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

using std::string; using std::cout; using std::endl;

class FragTrap : virtual public ClapTrap {

public:
	FragTrap();
	FragTrap(string name);
	FragTrap(const FragTrap& ref);
	~FragTrap();
	FragTrap& operator=(const FragTrap& ref);

	void highFivesGuys() const ;
};

#endif