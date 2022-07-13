#include "RobotomyRequestForm.hpp"

using std::cout; using std::endl;

RobotomyRequestForm::RobotomyRequestForm() {}
RobotomyRequestForm::RobotomyRequestForm(const string& target)
: Form("RobotomyForm", 72, 45) { this->setTarget(target); }
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& ref) {
	*this = ref;
}
RobotomyRequestForm::~RobotomyRequestForm() {};

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& ref) {
	Form::operator=(ref);
	return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const {
	this->Form::execute(executor);
	cout << "덜덜덜덜덜드드드드드드다다다닥가" << endl;
	srand(time(NULL));
	if (rand() % 2)
		cout << this->getTarget() << " has been robotomized successfully 50% of the time" << endl;
	else
		cout << this->getTarget() << " has been failed" << endl;
}