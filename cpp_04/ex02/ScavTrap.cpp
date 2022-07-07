#include "ScavTrap.hpp"

using std::cout; using std::endl; using std::string;

ScavTrap::ScavTrap() : ClapTrap() {
	this->hitPoint = 100;
	this->energyPoint = 50;
	this->power = 20;
	cout << "ScavTrap(" << this->name << ") is Created" << endl;
}
ScavTrap::ScavTrap(string name) : ClapTrap(name) {
	this->hitPoint = 100;
	this->energyPoint = 50;
	this->power = 20;
	cout << "ScavTrap(" << this->name << ") is Created" << endl;
}
ScavTrap::ScavTrap(const ScavTrap& ref) : ClapTrap(ref.name) {
	this->hitPoint = ref.hitPoint;
	this->power = ref.power;
	this->energyPoint = ref.energyPoint;
	cout << "ScavTrap(" << this->name << ") Copies " << ref.name << endl;
}
ScavTrap::~ScavTrap() { cout << "ScavTrap(" << this->name << ") is Destroyed" << endl; }

ScavTrap& ScavTrap::operator=(const ScavTrap& ref) {
	ClapTrap::operator=(ref);
	return *this;
}

void ScavTrap::attack(const std::string& target) {
	if (this->isDead()) {
		cout << "Attack Failed - " << this->name << endl;
		cout << "ScavTrap" << this->name << " is already Died" << endl;
		return;
	}
	if (this->isNoEnergy()) {
		cout << "Attack Failed - " << this->name << endl;
		cout << "Energy is not Enough" << endl;
		return ;
	}
	cout << "ScavTrap " << this->name << " attacks " << target
	<< ", causing " << this->power << " points of damage!" << endl;
	energyDec(1);
}

void ScavTrap::guardGate() { cout << this->name << " : guard gate" << endl; }