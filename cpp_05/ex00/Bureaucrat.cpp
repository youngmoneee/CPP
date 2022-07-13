#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}
Bureaucrat::Bureaucrat(string name, int grade) : name(name), grade(grade) {
	if (grade < 1) throw Bureaucrat::GradeTooHighException();
	if (grade > 150) throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& ref) {
	*this = ref;
	std::cout << "=" << std::endl;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& ref) {
	if (this == &ref) return *this ;
	*(const_cast<string *>(&this->name)) = ref.name;
	this->grade = ref.grade;
	return *this ;
}

const string& Bureaucrat::getName() const { return this->name; }
int Bureaucrat::getGrade() const { return this->grade; }
void Bureaucrat::incGrade() {
	if (this->grade - 1 < 1) throw Bureaucrat::GradeTooHighException();
	this->grade--;
}
void Bureaucrat::decGrade() {
	if (this->grade + 1 > 150) throw Bureaucrat::GradeTooLowException();
	this->grade++;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bu) {
	os << bu.getName() << ", bureaucrat grade " << bu.getGrade();
	return os;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade Can't over than 1";
}
const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade Can't under than 150";
}