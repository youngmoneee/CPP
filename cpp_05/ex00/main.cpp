#include "Bureaucrat.hpp"

using std::cout; using std::endl;

int main() {
	{
		try {
			Bureaucrat a("Tester", 1);
			cout << a << endl;
			a.decGrade();
			cout << a << endl;
			a.incGrade();
			cout << a << endl;
			a.incGrade();
			cout << a << endl;
		} catch (std::exception& e) {
			cout << e.what() << endl;
		}
	}

	{
		try {
			Bureaucrat a("Tester", 150);
			cout << a << endl;
			a.incGrade();
			cout << a << endl;
			a.decGrade();
			cout << a << endl;
			try {
				a.decGrade();
				cout << a << endl;
			} catch (std::exception& e) {
				cout << "a.grade = " << a.getGrade() << endl;
			}
			cout << "re" << endl;
			a.decGrade();
			cout << a << endl;
		} catch (std::exception& e) {
			cout << e.what() << endl;
		}
	}

	{
		cout << endl;
		try {
			Bureaucrat a("Tester", 20);
			cout << a << endl;
			for (int i = 0; i < 30; i++) {
				a.incGrade();
				cout << a << endl;
			}
		} catch (std::exception& e) {
			cout << e.what() << endl;
		}
	}

	return 0;
}
