#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

using std::string;

class Cat : public Animal {
private:
	Brain* brain;
public:
	Cat();
	Cat(const Cat& ref);
	~Cat();
	Cat& operator=(const Cat& ref);

	void makeSound() const;
	Brain& getBrain() const ;
};

#endif