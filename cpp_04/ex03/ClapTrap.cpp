#include "ClapTrap.hpp"

using std::cout; using std::endl; using std::string;

ClapTrap::ClapTrap()
: name("No Name"), hitPoint(10), energyPoint(10), power(0) {
	cout << "ClapTrap(" << this->name << ") is Created" << endl;
}
ClapTrap::ClapTrap(string name)
: name(name), hitPoint(10), energyPoint(10), power(0) {
	cout << "ClapTrap(" << this->name << ") is Created" << endl;
}
ClapTrap::ClapTrap(const ClapTrap &ref)
: name(ref.name), hitPoint(ref.hitPoint), energyPoint(ref.energyPoint), power(ref.power) {
	cout << "ClapTrap(" << this->name << ") Copies " << ref.name << endl;
}
ClapTrap::~ClapTrap() { cout << "ClapTrap(" << this->name << ") is Destroyed" << endl; }

ClapTrap& ClapTrap::operator=(const ClapTrap &ref) {
	if (this == &ref) return *this;
	this->name = ref.name;
	this->hitPoint = ref.hitPoint;
	this->energyPoint = ref.energyPoint;
	this->power = ref.power;
	return *this;
}

bool ClapTrap::isDead( void ) { return this->hitPoint == 0; }
bool ClapTrap::isNoEnergy() { return this->energyPoint == 0; }

void ClapTrap::energyDec(unsigned int amount) {
	this->energyPoint -= amount;
	cout << "Energy of " << this->name << " is " << this->energyPoint << endl;
}

void ClapTrap::hpDec(unsigned int amount) {
	this->hitPoint -= amount;
	if (this->hitPoint < 0) this->hitPoint = 0;
	cout << "Hp of " << this->name << " is " << this->hitPoint << endl;
}

void ClapTrap::hpInc(unsigned int amount) {
	if (this->isDead()) {
		cout << this->name << " is already Dead" << endl;
		return ;
	}
	this->hitPoint += amount;
	cout << "Hp of "<< this->name << " is " << this->hitPoint << endl;
}

void ClapTrap::attack(const std::string& target) {
	if (this->isDead()) {
		cout << "Attack Failed - " << this->name << endl;
		cout << "ClapTrap" << this->name << " is already Died" << endl;
		return;
	}
	if (this->isNoEnergy()) {
		cout << "Attack Failed - " << this->name << endl;
		cout << "Energy is not Enough" << endl;
		return ;
	}
	cout << "ClapTrap " << this->name << " attacks " << target
	<< ", causing " << this->power << " points of damage!" << endl;
	energyDec(1);
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->isDead()) {
		cout << "No Damage" << endl;
		cout << this->name << " is already Died" << endl;
		return ;
	}
	cout << this->name << " got Damaged (-" << amount << ")" << endl;
	hpDec(amount);
	if (this->isDead()) cout << this->name << " is Dead" << endl;
}
void ClapTrap::beRepaired(unsigned int amount) {
	if (this->isDead()) {
		cout << "Repair Failed - " << this->name << endl;
		cout << this->name << " is already Died" << endl;
		return;
	}
	if (this->isNoEnergy()) {
		cout << "Repair Failed - " << this->name << endl;
		cout << "Energy is not Enough" << endl;
		return ;
	}
	cout << this->name << " Repaired" << endl;
	hpInc(amount);
	energyDec(1);
}