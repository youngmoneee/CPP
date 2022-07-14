#include "Intern.hpp"

using std::cout; using std::endl;

const string Intern::nameArr[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};

Intern::Intern() {}
Intern::Intern(const Intern& ref) { *this = ref; }
Intern::~Intern() {}
Intern& Intern::operator=(const Intern& ref) { if (this == &ref) return *this; return *this; }

Form* Intern::makeForm(const string& fname, const string& target) {
	int idx = 0;
	Form* ret;

	while (idx < 3 && fname != nameArr[idx]) idx++;
	switch (idx)
	{
		case 0 :
			ret = new PresidentialPardonForm(target);
			break ;
		case 1 :
			ret = new RobotomyRequestForm(target);
			break ;
		case 2 :
			ret = new ShrubberyCreationForm(target);
			break ;
		default :
			ret = nullptr;
	}
	if (ret) cout << "Intern Creates " << ret->getName() << endl;
	else cout << "Intern Can't Created.\n"
				 "Intern can make {\n"
				 "\tpresidential pardon\n"
				 "\trobotomy request\n"
				 "\tshrubbery creation\n}" << endl;
	return ret;
}