#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

using std::cout; using std::endl;

int main() {
	{
		const Animal* a = new Dog;
		const Animal* b = new Cat;

		const Dog* i = (Dog*)a;
		const Cat* j = (Cat*)b;
		i->getBrain()[0] = "qweqwe";
		cout << (i->getBrain())[0] << endl;
		try
		{
			cout << (i->getBrain())[200] << endl;
		} catch (const std::exception& aa) {
			cout << aa.what() << endl;
		}

		delete a;
		delete j;
	}

	return 0;
}
