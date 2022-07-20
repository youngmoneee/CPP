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

	std::vector<int> test;
	Span b(10);
	for (int i = 1; i <= 10; i++) test.push_back(i);
	b.addNumber(test.begin(), test.end());
	cout << b.shortestSpan() << ' ' << b.longestSpan() << endl;
	return 0;
}
