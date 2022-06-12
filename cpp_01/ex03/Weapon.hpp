#ifndef CPP_WEAPON_HPP
#define CPP_WEAPON_HPP

#include <iostream>

class Weapon {
private:
	std::string type;
public:
	Weapon();
	Weapon(std::string type);
	~Weapon();

	const std::string& getType() const;
	void setType(std::string type);
};
#endif