#include "Animal.hpp"

using std::cout; using std::endl; using std::string;

Animal::Animal() : type("Animal") { cout << "Animal Created" << endl; }
Animal::Animal(const Animal& ref) {
	*this = ref;
	cout << "Animal Copied" << endl;
}
Animal::~Animal() { cout << "Animal Destroied" << endl; }

Animal& Animal::operator=(const Animal &ref) {
	if (this == &ref) return *this;
	this->type = ref.type;
	return *this;
}
string Animal::getType() const { return this->type; }
void Animal::makeSound() const { cout << "Animal Sound" << endl; }
