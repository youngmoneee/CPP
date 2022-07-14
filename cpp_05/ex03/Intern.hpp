#ifndef INTERN_HPP
#define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

using std::string;

class Intern
{
private:
	static const string nameArr[3];

public:
	Intern();
	Intern(const Intern& ref);
	~Intern();
	Intern& operator=(const Intern& ref);

	Form* makeForm(const string& fname, const string& target);
};

#endif