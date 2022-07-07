#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

using std::string; using std::cout; using std::endl;

class Animal {
protected:
	string type;
public:
	Animal();
	Animal(string name);
	Animal(const Animal& ref);
	virtual ~Animal();
	Animal& operator=(const Animal& ref);

	virtual void makeSound() const;
	string getType() const;
};

#endif