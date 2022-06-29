#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {

	{
		ClapTrap clapTrap("youngpar");
		ScavTrap scavTrap("paryoung");

		scavTrap.attack("sandbag");
		clapTrap.attack("sandbag");
		scavTrap.guardGate();
		scavTrap.takeDamage(30);
		scavTrap.beRepaired(10);
		scavTrap.takeDamage(50);
		scavTrap.takeDamage(30);
		scavTrap.takeDamage(10);
		scavTrap.beRepaired(1);
		scavTrap.attack("sandbag");
	}
	return 0;
}
