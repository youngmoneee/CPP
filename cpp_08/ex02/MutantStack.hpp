#ifndef MUTANT_STACK_HPP
#define MUTANT_STACK_HPP

#include <stack>

using std::stack;

template <typename T>
class MutantStack : public stack<T> {

public:
	MutantStack() : stack<T>() {};
	MutantStack(const MutantStack& ref) : stack<T>(ref) {};
	~MutantStack(){};
	MutantStack& operator=(const MutantStack& ref) {
		if (this == &ref) return *this;
		stack<T>::operator=(ref);
		return *this;
	};
	
	typedef typename stack<T>::container_type::iterator iterator;
	iterator begin() { return this->stack<T>::c.begin(); }
	iterator end() { return this->stack<T>::c.end(); }
};

#endif
