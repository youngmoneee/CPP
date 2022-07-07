#include "Brain.hpp"

using std::string; using std::cout; using std::endl;

Brain::Brain() { cout << "Brain Created" << endl; }
Brain::Brain(const Brain& ref) {
	cout << "Brain Copied" << endl;
	*this = ref;
}
Brain::~Brain() { cout << "Brain Destroyed" << endl; }

string& Brain::operator[](int i) {
	if (i >= 100 || i < 0) throw std::out_of_range("Out of Range Exception");
	return this->ideas[i];
}
Brain& Brain::operator=(const Brain& ref) {
	for (int i = 0; i < 100; i++) this->ideas[i] = ref.ideas[i];
	return *this;
}