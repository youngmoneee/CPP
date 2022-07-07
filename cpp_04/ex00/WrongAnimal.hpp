#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <iostream>

using std::string; using std::cout; using std::endl;

class WrongAnimal {
protected:
	string type;
public:
	WrongAnimal();
	WrongAnimal(string name);
	WrongAnimal(const WrongAnimal& ref);
	~WrongAnimal();
	WrongAnimal& operator=(const WrongAnimal& ref);

	void makeSound() const;
	string getType() const;
};

#endif