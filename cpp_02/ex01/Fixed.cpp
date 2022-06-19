#include "Fixed.hpp"

using std::cout; using std::endl;

Fixed::Fixed() : bits(0) {
	cout << "Default constructor called" << endl;
}

Fixed::Fixed(const Fixed& ref) {
	cout << "Copy constructor called" << endl;
	*this = ref; // 복사 할당 구현
	//this->bits = ref.getRawBits(); // 그냥 구현
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
	cout << "getRawBits member function called" << endl;
	return this->bits;
}
void Fixed::setRawBits( int const bits) {
	this->bits = bits;
}