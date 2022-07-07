#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
	{
		const Animal *meta = new Animal();
		const Animal *i = new Dog();
		const Animal *j = new Cat();

		cout << j->getType() << " " << endl;
		cout << i->getType() << " " << endl;
		i->makeSound();
		j->makeSound();
		meta->makeSound();

		delete meta;
		delete i;
		delete j;
	}
	cout << "W r o n g A n i m a l" << endl;
	{
		// if not virtual
		const WrongAnimal* wa = new WrongAnimal();
		const WrongAnimal* wc = new WrongCat();

		cout << wa->getType() << endl;
		cout << wc->getType() << endl;
		wa->makeSound();
		wc->makeSound();
		delete wa;
		delete wc;
	}
	return 0;
}
