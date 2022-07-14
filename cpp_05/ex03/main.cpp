#include "Bureaucrat.hpp"
#include "Intern.hpp"

using std::cout; using std::endl;

int main() {
	Intern someRandomIntern;
	Form* rrf[4];

	rrf[0] = someRandomIntern.makeForm("robotomy request", "Bender");
	rrf[1] = someRandomIntern.makeForm("presidential pardon", "Bender2");
	rrf[2] = someRandomIntern.makeForm("shrubbery creation", "Bender3");
	rrf[3] = someRandomIntern.makeForm("youngpar", "parpar");

	cout << *rrf[0] << endl;
	cout << *rrf[1] << endl;
	cout << *rrf[2] << endl;
	cout << *rrf[3] << endl;

	cout << *rrf[0] << *rrf[1] << *rrf[3] << *rrf[2] << endl;

	delete rrf[0];
	delete rrf[1];
	delete rrf[2];
	delete rrf[3];
	return 0;
}
