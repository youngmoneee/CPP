#include "iter.hpp"
#include <iostream>

using std::cout; using std::endl;

template <typename T>
void test(const T& i) {
	cout << i << ' ';
}

int main(int argc, char** argv) {
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
	char carr[] = "abcdefgh";

	cout << "Int Test" << endl;
	iter(arr, 8, &test);
	cout << endl;
	
	cout << "char* Test" << endl;
	iter(carr, 8, &test);
	cout << endl;

	cout << "char** Test" << endl;
	iter(argv, argc, &test);
	cout << endl;
	return 0;
}
