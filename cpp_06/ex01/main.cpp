#include "Data.hpp"
#include <iostream>

using std::cout; using std::endl;

int main() {
	struct Data data = {42};

	uintptr_t uintret = serialize(&data);
	struct Data* pdata = deserialize(uintret);

	cout << &data << endl;
	cout << uintret << endl;
	cout << (data.contents == pdata->contents ? "True" : "False") << endl;
	cout << "Data Contents : " << data.contents << endl;
	cout << "pData Contents : " << pdata->contents << endl;
	return 0;
}
