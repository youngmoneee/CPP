#include "Fixed.hpp"

using std::cout; using std::endl;

Fixed::Fixed() : bits(0) {
	cout << "Default constructor called" << endl;
}
Fixed::Fixed(const int para) : bits(para << Fixed::fraction) {
	cout << "Int constructor called" << endl;
}

Fixed::Fixed(const float para) : bits(roundf(para * (1 << Fixed::fraction))){
	cout << "Float constructor called" << endl;
}

Fixed::Fixed(const Fixed& ref) {
	cout << "Copy constructor called" << endl;
	*this = ref;
}

Fixed::~Fixed() {
	cout << "Destructor called" << endl;
}

Fixed& Fixed::operator= (const Fixed& ref) {
	cout << "Copy assignment operator called" << endl;
	this->bits = ref.getRawBits();
	return *this;
}

int Fixed::getRawBits( void ) const {
	return this->bits;
}
void Fixed::setRawBits( int const bits) {
	this->bits = bits;
}

int Fixed::toInt( void ) const {
	return (this->bits) >> Fixed::fraction;
}
float Fixed::toFloat( void ) const {
	return (float)(this->bits) / (1 << Fixed::fraction);
}

std::ostream& operator<<(std::ostream& os, const Fixed &ref) {
	os << ref.toFloat();
	return os;
}