#include "ShrubberyCreationForm.hpp"

using std::cout; using std::endl; using std::fstream;

const string ShrubberyCreationForm::TREE = "       _-_\n"
					"    /~~   ~~\\\n"
					" /~~         ~~\\\n"
					"{               }\n"
					" \\  _-     -_  /\n"
					"   ~  \\\\ //  ~\n"
					"_- -   | | _- _\n"
					"  _ -  | |   -_\n"
					"      // \\\\";

ShrubberyCreationForm::ShrubberyCreationForm() {}
ShrubberyCreationForm::ShrubberyCreationForm(const string& target)
: Form("ShrubberyForm", 145, 137){ this->setTarget(target); }
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& ref) {
	*this = ref;
}
ShrubberyCreationForm::~ShrubberyCreationForm() {};

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& ref) {
	Form::operator=(ref);
	return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat& executor) const {
	this->Form::execute(executor);
	fstream fs((this->getTarget() + "_shrubbery").c_str(), fstream::app);
	if (fs.fail()) throw ShrubberyCreationForm::FileException();
	fs << this->TREE << endl;
	cout << this->getTarget() + "_shrubbery has been written" << endl;
}

const char *ShrubberyCreationForm::FileException::what() const throw(){
	return "FILE IO ERROR";
}