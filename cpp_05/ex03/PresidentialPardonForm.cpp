#include "PresidentialPardonForm.hpp"

using std::cout; using std::endl;

PresidentialPardonForm::PresidentialPardonForm() {}
PresidentialPardonForm::PresidentialPardonForm(const string &target)
: Form("PresidentialForm", 25, 5) { this->setTarget(target); }
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& ref) {
	*this = ref;
}
PresidentialPardonForm::~PresidentialPardonForm() {};

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& ref) {
	Form::operator=(ref);
	return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat& executor) const {
	this->Form::execute(executor);
	cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox" << endl;
}