#include "ClapTrap.hpp"

int main() {

	{
		ClapTrap test1("Test1");
		ClapTrap test2("Test2");
		ClapTrap test3;

		test3 = test1;
		test2.attack("mob");
		test3.attack("qwe");
		/*
		test1.takeDamage(5);
		test1.takeDamage(3);
		test1.beRepaired(10);
		test1.takeDamage(50);
		test1.beRepaired(100);
		test1.takeDamage(50);
		test1.attack("mob2");
		 */
	}
	/*
	{
		cout << "\n\tTEST 2\n"<< endl;
		ClapTrap test1("test");

		for (int i = 0; i < 6; i++) test1.attack("mob");
		test1.beRepaired(1);
		test1.beRepaired(1);
		test1.beRepaired(1);
		test1.beRepaired(1);
		// no energy left
		cout << "NO ENERGY TEST "<< endl;
		test1.beRepaired(1);
		test1.attack("mmmmooooooobbbbb");
		test1.takeDamage(10);
	}*/
	return 0;
}
