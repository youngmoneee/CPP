#include "Classes.hpp"

using std::cout; using std::endl;

int main() {
	srand(static_cast<unsigned int>(time(NULL)));

	cout << "Pointer Test" << endl;
	for (int i = 0; i < 5; i++) {
		Base* b = generate();

		identify(b);
		delete b;
	}
	cout << "Ref Test" << endl;
	for (int i = 0; i < 5; i++) {
		Base* b = generate();

		identify(*b);
		delete b;
	}
	return 0;
}
