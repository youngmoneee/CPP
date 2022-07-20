#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <vector>

using std::vector;

typedef unsigned int uint;

class Span {
private:
	vector<int> lst;
	Span();

public:
	Span(uint N);
	Span(const Span& ref);
	~Span();
	Span& operator=(const Span& ref);

	void addNumber(int n);
	template <typename Iter>
	void addNumber(Iter begin, Iter end) {
		for (; begin != end; begin++)
			this->addNumber(*begin);
	}
	void addNumber(const Span& ref);
	Span& operator+=(int n);
	uint shortestSpan();
	uint longestSpan();
	class FullException : public std::exception {
	public:
		const char* what() const throw();
	};
	class FewException : public std::exception {
	public:
		const char* what() const throw();
	};

public:
	uint size() const ;
	uint capacity() const ;
};

#endif
