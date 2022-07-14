#include "Point.hpp"

Point::Point() {
	*this = Point(0.0f, 0.0f);
}

Point::Point(const Point& ref) : x(ref.getX()), y(ref.getY()){}
Point::Point(const float x, const float y) : x(x), y(y){}

Fixed
Point::area(Point const other, Point const another) const {
	Fixed r1(this->x * other.getY() + other.getX() * another.getY() + another.getX() * this->y);
	Fixed r2(this->y * other.getX() + other.getY() * another.getX() + another.getY() * this->x);
	if (r1 < r2) return r2 - r1;
	return r1 - r2;
}

Point::~Point(){};

Point&
Point::operator=(const Point& ref){
	(void)ref;
	return *this;
}

Fixed
Point::getX(void) const { return this->x; }

Fixed
Point::getY(void) const { return this->y; }

std::ostream& operator<<(std::ostream& os, const Point& p) {
	os << p.getX() << " " << p.getY();
	return os;
}
