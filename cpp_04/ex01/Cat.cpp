#include "Cat.hpp"

using std::cout; using std::endl; using std::string;

Cat::Cat() {
	cout << "Cat Created" << endl;
	this->type = "Cat";
	this->brain = new Brain;
}
Cat::Cat(const Cat& ref) {
	*this = ref;
	cout << "Cat Copied" << endl;
}
Cat::~Cat(){
	delete brain;
	cout << "Cat Destroied" << endl;
}
Cat& Cat::operator=(const Cat& ref) {
	Animal::operator=(ref);
	*this->brain = ref.getBrain();
	return *this;
}

void Cat::makeSound() const { cout << "nyang" << endl; }
Brain& Cat::getBrain() const { return *this->brain; }