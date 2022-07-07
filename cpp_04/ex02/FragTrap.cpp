#include "FragTrap.hpp"

using std::cout; using std::endl; using std::string;

FragTrap::FragTrap() : ClapTrap() {
	this->hitPoint = 100;
	this->energyPoint = 100;
	this->power = 30;
	cout << "FragTrap(" << this->name << ") is Created" << endl;
}

FragTrap::FragTrap(string name) : ClapTrap(name) {
	this->hitPoint = 100;
	this->energyPoint = 100;
	this->power = 30;
	cout << "FragTrap(" << this->name << ") is Created" << endl;
}

FragTrap::FragTrap(const FragTrap& ref) : ClapTrap(ref.name) {
	this->hitPoint = ref.hitPoint;
	this->power = ref.power;
	this->energyPoint = ref.energyPoint;
	cout << "FragTrap(" << this->name << ") Copies " << ref.name << endl;
}

FragTrap::~FragTrap() { cout << "FragTrap(" << this->name << ") is Destroyed" << endl; }

FragTrap& FragTrap::operator=(const FragTrap& ref) {
	ClapTrap::operator=(ref);
	return *this;
}

void FragTrap::highFivesGuys() const {
	cout << this->name << " HighFive gogo" << endl;
}