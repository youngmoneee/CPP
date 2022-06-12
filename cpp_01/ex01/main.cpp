#include "Zombie.hpp"

const int n = 10;

int main() {
	Zombie* zombies = zombieHorde(n, "Foo");
	for (int i = 0; i != n; i++)
		zombies[i].announce();
	delete[] zombies;
	return 0;
}
