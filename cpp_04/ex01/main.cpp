#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

using std::cout; using std::endl;

int main() {
	{
		const Dog* i = new Dog;
		const Animal* j = new Cat;


		i->getBrain()[0] = "qweqwe";
		cout << (i->getBrain())[0] << endl;
		try
		{
			cout << (i->getBrain())[200] << endl;
		} catch (const std::exception& aa) {
			cout << aa.what() << endl;
		}

		delete i;
		delete j;
	}

	return 0;
}
