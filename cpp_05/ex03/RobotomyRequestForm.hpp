#ifndef ROBOTOMY_REQUEST_FORM_HPP
#define ROBOTOMY_REQUEST_FORM_HPP

#include "Form.hpp"
#include <stdlib.h>
#include <time.h>

using std::string;

class RobotomyRequestForm : public Form
{
private:
	RobotomyRequestForm();

public:
	RobotomyRequestForm(const string& target);
	RobotomyRequestForm(const RobotomyRequestForm& ref);
	~RobotomyRequestForm();

	RobotomyRequestForm& operator=(const RobotomyRequestForm& ref);
	void execute(Bureaucrat const& executor) const ;
};

#endif
