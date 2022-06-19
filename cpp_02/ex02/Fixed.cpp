#include "Fixed.hpp"

using std::cout; using std::endl;

Fixed::Fixed() : bits(0) {}
Fixed::Fixed(const int para) : bits(para << Fixed::fraction) {}
Fixed::Fixed(const float para) : bits(roundf(para * (1 << Fixed::fraction))){}
Fixed::Fixed(const Fixed& ref) { *this = ref; }
Fixed::~Fixed() {}

Fixed& Fixed::operator= (const Fixed& ref) {
	this->bits = ref.getRawBits();
	return *this;
}

int Fixed::getRawBits( void ) const { return this->bits; }
void Fixed::setRawBits( int const bits) { this->bits = bits; }

int Fixed::toInt( void ) const {
	return (this->bits) >> Fixed::fraction;
}
float Fixed::toFloat( void ) const {
	return (float)(this->bits) / (1 << Fixed::fraction);
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
	if ( a > b ) return a;
	return b;
}
Fixed& Fixed::min(Fixed& a, Fixed& b) {
	if ( a > b ) return b;
	return a;
}
const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
	if ( a > b ) return a;
	return b;
}
const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
	if ( a > b ) return b;
	return a;
}

Fixed& Fixed::operator++(void) {
	++this->bits;
	return *this;
}
Fixed Fixed::operator++(int) {
	Fixed ret = *this;
	++this->bits;
	return ret;
}
Fixed& Fixed::operator--(void) {
	--this->bits;
	return *this;
}
Fixed Fixed::operator--(int) {
	Fixed ret = *this;
	--this->bits;
	return ret;
}
bool Fixed::operator<(const Fixed& ref) const {
	return this->bits < ref.bits;
}
bool Fixed::operator>(const Fixed& ref) const {
	return this->bits > ref.bits;
}
bool Fixed::operator<=(const Fixed& ref) const {
	return this->bits <= ref.bits;
}
bool Fixed::operator>=(const Fixed& ref) const {
	return this->bits >= ref.bits;
}
bool Fixed::operator==(const Fixed& ref) const {
	return this->bits == ref.bits;
}
bool Fixed::operator!=(const Fixed& ref) const {
	return this->bits != ref.bits;
}
Fixed Fixed::operator+(const Fixed& ref) const {
	return Fixed(this->toFloat() + ref.toFloat());
}
Fixed Fixed::operator-(const Fixed& ref) const {
	return Fixed(this->toFloat() - ref.toFloat());
}
Fixed Fixed::operator*(const Fixed& ref) const {
	return Fixed(this->toFloat() * ref.toFloat());
}
Fixed Fixed::operator/(const Fixed& ref) const {
	return Fixed(this->toFloat() / ref.toFloat());
}

std::ostream& operator<<(std::ostream& os, const Fixed &ref) {
	os << ref.toFloat();
	return os;
}