#include "Form.hpp"

using std::cout; using std::endl;

Form::Form() {}
Form::Form(string name, int req, int exec) : name(name), is_signed(false) {
	if (req > 150 || exec > 150) throw Form::GradeTooLowException();
	else if (req < 1 || exec < 1) throw Form::GradeTooHighException();
	this->req_grade = req;
	this->exec_grade = exec;
}
Form::Form(const Form &ref) {
	*this = ref;
}
Form::~Form() {}
Form& Form::operator=(const Form &ref) {
	if (this == &ref) return *this;
	*const_cast<string *>(&this->name) = ref.name;
	this->exec_grade = ref.exec_grade;
	this->req_grade = ref.req_grade;
	this->is_signed = ref.is_signed;
	this->target = ref.target;
	return *this;
}

const string& Form::getTarget() const { return this->target; }
void Form::setTarget(const string& target) {
	this->target = target;
}

const string& Form::getName() const { return this->name; }
bool Form::getSigned() const { return this->is_signed; }
int Form::getReqGrd() const { return this->req_grade; }
int Form::getExecGrd() const { return this->exec_grade; }

void Form::beSigned(const Bureaucrat& admin) {
	if (admin.getGrade() > this->req_grade)
		throw GradeTooLowException();
	this->is_signed = true;
}

void Form::execute(Bureaucrat const& executor) const {
	if (!this->is_signed) throw ExecuteSignException();
	if (this->exec_grade < executor.getGrade())
		throw ExecuteGradeException();
}

std::ostream& operator<<(std::ostream& os, const Form& form) {
	os << "Name : " << form.getName() << '\n'
	<< "Required Grade : " << form.getReqGrd() << '\n'
	<< "Executed Grade : " << form.getExecGrd() << '\n'
	<< "this form is " << (form.getSigned() ? "Signed" : "not Signed") << endl;
	return os;
}

const char* Form::GradeTooLowException::what() const throw() {
	return "Grade is Too Low";
}
const char* Form::GradeTooHighException::what() const throw() {
	return "Grade is Too High";
}

const char* Form::ExecuteGradeException::what() const throw() {
	return "Grade not Enough to Execute";
}

const char* Form::ExecuteSignException::what() const throw() {
	return "This form is not signed";
}