#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

using std::string; using std::exception;

class Form;
class Bureaucrat {
private:
	const string name;
	int grade;
	Bureaucrat();

public:
	Bureaucrat(string name, int grade);
	Bureaucrat(const Bureaucrat& ref);
	~Bureaucrat();
	Bureaucrat& operator= (const Bureaucrat& ref);

	const string& getName() const ;
	int getGrade() const;
	void incGrade();
	void decGrade();

	void signForm(Form& form);

class GradeTooHighException : public exception {
	public:
		const char* what() const throw();
	};
	class GradeTooLowException : public exception {
	public:
		const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bu);

#endif