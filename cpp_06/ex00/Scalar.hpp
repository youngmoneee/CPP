#ifndef SCALAR_HPP
#define SCALAR_HPP

#include <iostream>
#include <limits>
#include <iomanip>
#include <cmath>

using std::string; using std::ostream; using std::exception;

class Scalar {
private:
	string value;
	Scalar();

public:
	Scalar(const string& value);
	Scalar(const Scalar& ref);
	~Scalar();

	Scalar& operator=(const Scalar& ref);

	ostream& pChar(ostream& os);
	ostream& pInt(ostream& os);
	ostream& pFloat(ostream& os);
	ostream& pDouble(ostream& os);

	class ImposibleException : public exception {
	public:
		const char* what() const throw() ;
	};
	class NotPrintableException : public exception {
	public:
		const char* what() const throw() ;
	};
};

#endif
