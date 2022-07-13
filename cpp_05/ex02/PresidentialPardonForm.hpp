#ifndef PRESIDENTIAL_PARDON_FORM_HPP
#define PRESIDENTIAL_PARDON_FORM_HPP

#include "Form.hpp"

using std::string;

class PresidentialPardonForm : public Form
{
private:
	PresidentialPardonForm();

public:
	PresidentialPardonForm(const string& target);
	PresidentialPardonForm(const PresidentialPardonForm& ref);
	~PresidentialPardonForm();

	PresidentialPardonForm& operator=(const PresidentialPardonForm& ref);
	void execute(Bureaucrat const& executor) const ;
};

#endif
