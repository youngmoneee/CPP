#include "Scalar.hpp"

using std::cout; using std::endl;

int main(int argc, char **argv) {
	if (argc != 2) {
		cout << "error" << endl;
		return 0;
	}
	Scalar ret(argv[1]);
	ret.pChar(cout) << endl;
	ret.pInt(cout) << endl;
	ret.pFloat(cout) << endl;
	ret.pDouble(cout) << endl;
	return 0;
}
