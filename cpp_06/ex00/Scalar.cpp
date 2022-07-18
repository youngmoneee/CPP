#include "Scalar.hpp"

using std::ostream;

Scalar::Scalar() {}
Scalar::Scalar(const string& value) : value(value){
}
Scalar::Scalar(const Scalar &ref) {
	*this = ref;
}
Scalar& Scalar::operator=(const Scalar& ref) {
	if (this == &ref) return *this;
	this->value = ref.value;
	return *this;
}
Scalar::~Scalar() {}

ostream& Scalar::pChar(ostream& os) {
	int num;

	os << "char : ";
	try {
		num = std::stoi(this->value);
		if (num < CHAR_MIN || num > CHAR_MAX)
			throw ImposibleException();
		if (!isprint(num))
			throw NotPrintableException();
		os << "'" << static_cast<char>(num) << "'";
	} catch(NotPrintableException& e) {
		os << e.what();
	} catch (...) {
		os << "imposible";
	}
	return os;
}

ostream& Scalar::pInt(ostream& os) {
	int num;

	os << "int : ";
	try {
		num = std::stoi(this->value);
		os << num;
	} catch (...) {
		os << "imposible";
	}
	return os;
}

ostream& Scalar::pFloat(ostream& os) {
	float flt;

	os << "float : ";
	try {
		flt = std::stof(this->value);
		if (isnan(flt) || isinf(flt))
			os << std::showpos;
		os << std::setprecision(std::numeric_limits<float>::digits10) << flt;
		if (flt == static_cast<int>(flt))
			os << ".0";
		os << 'f';
	} catch (exception& e){
		os << "nanf";
		return os;
	}
	return os;
}

ostream& Scalar::pDouble(ostream& os) {
	double dbl;

	os << "double : ";
	try {
		dbl = std::stod(this->value);
		if (isnan(dbl) || isinf(dbl))
			os << std::showpos;
		os << std::setprecision(std::numeric_limits<double>::digits10) << dbl;
		if (dbl == static_cast<int>(dbl))
			os << ".0";
	} catch (...) {
		os << "nan";
		return os;
	}
	return os;
}

const char* Scalar::ImposibleException::what() const throw() {
	return "imposible";
}

const char* Scalar::NotPrintableException::what() const throw() {
	return "Non displayable";
}
