#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"

using std::string; using std::cout; using std::endl;

class Cat : public Animal {
public:
	Cat();
	Cat(const Cat& ref);
	~Cat();
	Cat& operator=(const Cat& ref);

	void makeSound() const;
};

#endif