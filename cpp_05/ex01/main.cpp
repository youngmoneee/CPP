#include "Bureaucrat.hpp"
#include "Form.hpp"

using std::cout; using std::endl;

int main() {
	{
		try {
			Bureaucrat admin("youngpar", 15);
			Form form("Form", 20, 150);
			cout << admin << '\n' << endl;
			cout << form << endl;

			admin.signForm(form);

		} catch (std::exception& e) {
			cout << e.what() << endl;
		}
	}

	return 0;
}
