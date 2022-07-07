#include "Dog.hpp"

using std::cout; using std::endl; using std::string;

Dog::Dog() { this->type = "Dog"; cout << "Dog Created" << endl; }
Dog::Dog(const Dog& ref) {
	*this = ref;
	cout << "Dog Copied" << endl;
}
Dog::~Dog() { cout << "Dog Destroyed" << endl; }
Dog& Dog::operator=(const Dog& ref) {
	Animal::operator=(ref);
	return *this;
}

void Dog::makeSound() const { cout << "wall" << endl; }