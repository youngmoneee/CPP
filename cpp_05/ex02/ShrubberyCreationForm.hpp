#ifndef SHRUBBERY_CREATION_FORM_HPP
#define SHRUBBERY_CREATION_FORM_HPP

#include "Form.hpp"
#include <fstream>

using std::string;

class ShrubberyCreationForm : public Form
{
private:
	ShrubberyCreationForm();

public:
	ShrubberyCreationForm(const string& target);
	ShrubberyCreationForm(const ShrubberyCreationForm& ref);
	~ShrubberyCreationForm();

	ShrubberyCreationForm& operator=(const ShrubberyCreationForm& ref);
	void execute(Bureaucrat const& executor) const ;

	class FileException : public exception {
	public:
		const char* what() const throw();
	};

private:
	static const string TREE;
};

#endif
