#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() {
	{
		//Animal* a = new Animal;
		Animal* b = new Dog;
		Animal* c = new Cat;

		Dog* i = (Dog*) b;
		Cat* j = (Cat*) c;

		b->makeSound();
		c->makeSound();

		i->makeSound();
		j->makeSound();

		//delete a;
		delete b;
		delete c;
	}

	return 0;
}
