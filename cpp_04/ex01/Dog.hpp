#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

using std::string; using std::cout; using std::endl;

class Dog : public Animal {
private:
	Brain* brain;
public:
	Dog();
	Dog(const Dog& ref);
	~Dog();
	Dog& operator=(const Dog& ref);

	void makeSound() const;
	Brain& getBrain() const ;
};

#endif