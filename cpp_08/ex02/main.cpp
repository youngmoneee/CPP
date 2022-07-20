#include <iostream>
#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	
	std::cout << mstack.top() << std::endl;
	
	mstack.pop();
	
	std::cout << mstack.size() << std::endl;
	
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	
	++it;
	--it;
	
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	// Given
	std::cout << "stack from mstack" << std::endl;
	while (!s.empty()) {
		std::cout << s.top() << ' ';
		s.pop();
	} std::cout << "\nSort Test" << std::endl;

	std::cout << "[Before]" << std::endl;
	for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); it++)
		std::cout << *it << ' ';
	std::cout << "\n[After]" << std::endl;
	std::sort(mstack.begin(), mstack.end());
	for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); it++)
		std::cout << *it << ' ';
	std::cout << '\n' << std::endl;


	std::cout << "[  Copy Test  ]" << std::endl;
	MutantStack<int> mstack_copy = mstack;
	*mstack_copy.begin() = 4242;

	std::cout << "[  mstack_copy's first value -> 4242  ]" << std::endl;
	std::cout << "<mstack>" << std::endl;
	for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); it++)
		std::cout << *it << ' ';
	std::cout << std::endl;
	std::cout << "<mstack_copy>" << std::endl;
	for (MutantStack<int>::iterator it = mstack_copy.begin(); it != mstack_copy.end(); it++)
		std::cout << *it << ' ';
	std::cout << std::endl;

	std::cout << "[  Assign Test  ]" << std::endl;
	MutantStack<int> mstack_copy2;
	mstack_copy2 = mstack;
	*(mstack_copy2.begin() + 1) = 5252;

	std::cout << "[  mstack_copy2's second value -> 5252  ]" << std::endl;
	std::cout << "<mstack>" << std::endl;
	for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); it++)
		std::cout << *it << ' ';
	std::cout << std::endl;
	std::cout << "<mstack_copy2>" << std::endl;
	for (MutantStack<int>::iterator it = mstack_copy2.begin(); it != mstack_copy2.end(); it++)
		std::cout << *it << ' ';
	std::cout << "\nFind Test" << std::endl;
	std::cout << "find 17" << std::endl;
	
	MutantStack<int>::iterator ret = find(mstack.begin(), mstack.end(), 17);

	std::cout << "17 is " << (ret == mstack.end() ? -1 : ret - mstack.begin()) << "'s Index" << std::endl;
	return 0;
}
