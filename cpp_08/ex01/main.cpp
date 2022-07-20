#include "Span.hpp"
#include <iostream>

using std::cout; using std::endl;

int main() {
	Span a(20);
	a.addNumber(4);
	a.addNumber(15);
	a.addNumber(3);
	a.addNumber(7);
	cout << a.shortestSpan() << ' ' << a.longestSpan() << endl;
	return 0;
}
