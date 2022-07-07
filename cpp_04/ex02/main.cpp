#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {

	{
		ScavTrap young("ST");
		FragTrap par("FT");

		young.attack("Anyone");
		par.takeDamage(50);
		par.takeDamage(2);
		par.beRepaired(2);
		young.takeDamage(50);
		par.attack("asd");
		par.attack("asd");
		par.attack("asd");
		par.attack("asd");
		young.guardGate();
		par.highFivesGuys();
	}
	return 0;
}
