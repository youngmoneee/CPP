#include "Span.hpp"

Span::Span(){}
Span::Span(uint N) {
	this->lst.reserve(N);
}
Span::Span(const Span &ref) {
	this->lst.clear();
	this->lst.reserve(ref.lst.capacity());
	for (uint i = 0; i < ref.size(); i++)
		*this += ref.lst[i];
}
Span::~Span(){}

void Span::addNumber(int n) {
	if (this->lst.capacity() <= this->lst.size())
		throw Span::FullException();
	this->lst.push_back(n);
}

void Span::addNumber(const Span &ref) {
	for (uint i = 0; i < ref.lst.size(); i++)
		this->addNumber(ref.lst[i]);
}

Span& Span::operator+=(int n) {
	this->addNumber(n);
	return *this;
}

uint Span::size() const { return this->lst.size(); }
uint Span::capacity() const { return this->lst.capacity(); }

uint Span::shortestSpan() {
	if (this->size() < 2) throw Span::FewException();
	std::sort(lst.begin(), lst.end());
	uint min_val = UINT_MAX;
	for (uint i = 1; i < this->size(); i++)
		min_val = std::min(min_val, static_cast<uint>(this->lst[i] - this->lst[i - 1]));
	return min_val;
}

uint Span::longestSpan() {
	if (this->size() < 2) throw Span::FewException();
	return *std::max_element(this->lst.begin(), this->lst.end()) - *std::min_element(this->lst.begin(), this->lst.end());
}

const char* Span::FullException::what() const throw() {
	return "Array is Full";
}

const char* Span::FewException::what() const throw() {
	return "Array is Too Few";
}
