#include "Cat.hpp"

using std::cout; using std::endl; using std::string;

Cat::Cat() { this->type = "Cat"; cout << "Cat Created" << endl; };
Cat::Cat(const Cat& ref) {
	*this = ref;
	cout << "Cat Copied" << endl;
}
Cat::~Cat(){ cout << "Cat Destroied" << endl; }
Cat &Cat::operator=(const Cat &ref) {
	Animal::operator=(ref);
	return *this;
}

void Cat::makeSound() const { cout << "nyang" << endl; }