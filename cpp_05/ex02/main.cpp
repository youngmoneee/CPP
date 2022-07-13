#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

using std::cout; using std::endl;

int main() {
	Bureaucrat admin("youngpar", 2);
	ShrubberyCreationForm shrub("Nice");
	RobotomyRequestForm robot("ROBOT");
	PresidentialPardonForm pre("President");

	cout << admin << '\n' << endl;
	cout << shrub << endl;
	cout << robot << endl;
	cout << pre << endl;

	admin.signForm(shrub);
	admin.executeForm(shrub);
	cout << endl;
	admin.signForm(robot);
	admin.executeForm(robot);
	cout << endl;
	admin.signForm(pre);
	admin.executeForm(pre);
	return 0;
}
