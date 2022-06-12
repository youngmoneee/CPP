#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include "Weapon.hpp"

class HumanA {
private:
	HumanA();
	const std::string name;
	const Weapon& weapon;
public:
	HumanA(std::string name, Weapon& weapon);
	~HumanA();
	void attack() const;
};

#endif