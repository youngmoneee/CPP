#include "WrongAnimal.hpp"

using std::cout; using std::endl; using std::string;

WrongAnimal::WrongAnimal() : type("WrongAnimal") { cout << "WrongAnimal Created" << endl; }
WrongAnimal::WrongAnimal(const WrongAnimal& ref) {
	*this = ref;
	cout << "WrongAnimal Copied" << endl;
}
WrongAnimal::~WrongAnimal() { cout << "WrongAnimal Destroied" << endl; }

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &ref) {
	this->type = ref.type;
	return *this;
}
string WrongAnimal::getType() const { return this->type; }
void WrongAnimal::makeSound() const { cout << "WrongAnimal Sound" << endl; }
