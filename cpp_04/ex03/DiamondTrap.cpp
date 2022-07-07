#include "DiamondTrap.hpp"

using std::cout; using std::endl; using std::string;

DiamondTrap::DiamondTrap() : ClapTrap("No name_clap_name"), ScavTrap("No name_clap_name"), FragTrap("No name_clap_name") {
	this->name = "No name";
	hitPoint = FragTrap::hitPoint;
	energyPoint = ScavTrap::energyPoint;
	power = FragTrap::power;
	cout << "DiamondTrap(" << this->name << ") is Created" << endl;
}

DiamondTrap::DiamondTrap(string name) : ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name") {
	this->name = name;
	this->hitPoint = FragTrap::hitPoint;
	this->energyPoint = ScavTrap::energyPoint;
	this->power = FragTrap::power;
	cout << "DiamondTrap(" << this->name << ") is Created" << endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& ref) : ClapTrap(ref), ScavTrap(ref), FragTrap(ref) {
	*this = ref;
	cout << "DiamondTrap(" << this->name << ") Copies " << ref.name << endl;
}

DiamondTrap::~DiamondTrap() { cout << "DiamondTrap(" << this->name << ") is Destroyed" << endl; }

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& ref) {
	ClapTrap::operator=(ref);
	this->name = ref.name;
	return *this;
}

void DiamondTrap::whoAmI() const {
	cout
	<< "Name : " << this->name << '\n'
	<< "Clap Name : " << this->ClapTrap::name << '\n'
	<< "HP : " << this->hitPoint << '\n'
	<< "Energy : " << this->energyPoint << '\n'
	<< "Power : " << this->power << endl;
}