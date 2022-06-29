#include "DiamondTrap.hpp"

int main() {

	{
		DiamondTrap youngpar("youngpar");

		youngpar.attack("zz");
		youngpar.guardGate();
		youngpar.highFivesGuys();
		youngpar.takeDamage(12);
		youngpar.beRepaired(34);

		DiamondTrap youngpar2(youngpar);

		youngpar.whoAmI();
		youngpar2.whoAmI();
	}
	return 0;
}
