#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <string>

using std::string;

class Bureaucrat;
class Form
{
private:
	const string name;
	bool is_signed;
	int req_grade;
	int exec_grade;
	string target;

protected:
	Form();

public:
	Form(string name, int req, int exec);
	Form(const Form& ref);
	virtual ~Form() = 0;
	Form& operator=(const Form& ref);

	const string& getName() const ;
	bool getSigned() const ;
	int getReqGrd() const ;
	int getExecGrd() const ;

	const string& getTarget() const ;
	void setTarget(const string& target);

	void beSigned(const Bureaucrat& admin) ;
	virtual void execute(Bureaucrat const& executor) const = 0;

class GradeTooHighException : public std::exception {
public:
		const char* what() const throw() ;
	};
class GradeTooLowException : public std::exception {
public:
		const char* what() const throw();
	};
class ExecuteGradeException : public std::exception {
public:
		const char* what() const throw();
	};
class ExecuteSignException : public std::exception {
public:
		const char* what() const throw();
	};

};

std::ostream& operator<<(std::ostream& os, const Form& form);

#endif
