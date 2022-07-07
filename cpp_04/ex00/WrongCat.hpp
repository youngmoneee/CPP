#ifndef WRONG_CAT_HPP
#define WRONG_CAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

using std::string; using std::cout; using std::endl;

class WrongCat : public WrongAnimal {
public:
	WrongCat();
	WrongCat(const WrongCat& ref);
	~WrongCat();
	WrongCat& operator=(const WrongCat& ref);

	void makeSound() const;
};

#endif