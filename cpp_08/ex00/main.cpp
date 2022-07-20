#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <deque>

using std::cout; using std::endl;
using std::vector; using std::list; using std::deque;
int main() {
	vector<int> v1;
	list<int> v2;
	std::string v3 = "SAYHO";

	for (int i = 1; i < 10; i++) {
		v1.push_back(i++);
		v2.push_back(i);
	}

	cout << "Vector Test" << endl;
	cout << ">> Iter valid Test" << endl;
	try {
		cout << *easyfind(v1, 5) << endl;
		cout << *easyfind(v1, 9876) << endl;
	} catch (std::exception& e) {
		cout << e.what() << endl;
	}
	cout << ">> Iter Feature Test" << endl;
	for (vector<int>::iterator it = easyfind(v1, 3); it != v1.end(); it++)
		cout << *it << ' ';
	cout << endl;

	cout << "List Test" << endl;
	cout << ">> Iter valid Test" << endl;
	try {
		cout << *easyfind(v2, 4) << endl;
		cout << *easyfind(v2, 3) << endl;
	} catch (std::exception& e) {
		cout << e.what() << endl;
	}

	cout << "String Test" << endl;
	cout << ">> Iter valid Test" << endl;
	try {
		cout << *easyfind(v3, 'A') << endl;
		cout << *easyfind(v3, -123) << endl;
	} catch (std::exception& e) {
		cout << e.what() << endl;
	}
	cout << ">> Iter Feature Test" << endl;
	for (std::string::iterator it = easyfind(v3, 'H'); it != v3.end(); it++)
		cout << *it << ' ';
	cout << endl;
	return 0;
}
