#include "Dog.hpp"

using std::cout; using std::endl; using std::string;

Dog::Dog() {
	cout << "Dog Created" << endl;
	this->type = "Dog";
	this->brain = new Brain;
}
Dog::Dog(const Dog& ref) {
	*this = ref;
	cout << "Dog Copied" << endl;
}
Dog::~Dog() {
	delete brain;
	cout << "Dog Destroyed" << endl;
}
Dog& Dog::operator=(const Dog& ref) {
	Animal::operator=(ref);
	*this->brain = ref.getBrain();
	return *this;
}

void Dog::makeSound() const { cout << "wall" << endl; }
Brain& Dog::getBrain() const { return *this->brain; }