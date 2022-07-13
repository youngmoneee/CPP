#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

using std::string;

class Bureaucrat;
class Form
{
private:
	const string name;
	bool is_signed;
	int req_grade;
	int exec_grade;
	Form();

public:
	Form(string name, int req, int exec);
	Form(const Form& ref);
	~Form();
	Form& operator=(const Form& ref);

	const string& getName() const ;
	bool getSigned() const ;
	int getReqGrd() const ;
	int getExecGrd() const ;

	void beSigned(const Bureaucrat& admin) ;

class GradeTooHighException : public std::exception {
public:
		const char* what() const throw() ;
	};
class GradeTooLowException : public std::exception {
public:
		const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream& os, const Form& form);

#endif
