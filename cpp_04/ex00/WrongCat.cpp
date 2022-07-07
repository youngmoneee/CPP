#include "WrongCat.hpp"

using std::cout; using std::endl; using std::string;

WrongCat::WrongCat() { this->type = "WrongCat"; cout << "WrongCat Created" << endl; };
WrongCat::WrongCat(const WrongCat& ref) {
	*this = ref;
	cout << "WrongCat Copied" << endl;
}
WrongCat::~WrongCat(){ cout << "WrongCat Destroied" << endl; }
WrongCat &WrongCat::operator=(const WrongCat &ref) {
	WrongAnimal::operator=(ref);
	return *this;
}

void WrongCat::makeSound() const { cout << "nyang" << endl; }