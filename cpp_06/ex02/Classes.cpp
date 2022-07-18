#include "Classes.hpp"

using std::cout; using std::endl;

Base::~Base(){};
A::~A(){};
B::~B(){};
C::~C(){};

Base* generate(void) {
	unsigned int tmp = rand() % 3;

	if (tmp == 0) return new A;
	else if (tmp == 1) return new B;
	return new C;
}

void identify(Base* p) {
	cout << "this class is ";
	if (dynamic_cast<A*>(p)) cout << "A" << endl;
	else if (dynamic_cast<B*>(p)) cout << "B" << endl;
	else if (dynamic_cast<C*>(p)) cout << "C" << endl;
}

void identify(Base& p) {
	cout << "this class is ";
	try {
		if (&dynamic_cast<A&>(p) == &p) cout << "A" << endl;
	} catch (std::bad_cast& e){};
	try {
		if (&dynamic_cast<B&>(p) == &p) cout << "B" << endl;
	} catch (std::bad_cast& e){};
	try {
		if (&dynamic_cast<C&>(p) == &p) cout << "C" << endl;
	} catch (std::bad_cast& e){};
}
