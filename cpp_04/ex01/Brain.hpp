#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

using std::string;

class Brain {
private:
	string ideas[100];
public:
	Brain();
	Brain(const Brain& ref);
	~Brain();

	Brain& operator=(const Brain& ref);
	string& operator[](int i);
};

#endif
