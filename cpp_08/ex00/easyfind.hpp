#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <string>

template <typename T>
typename T::iterator easyfind(T& ref, int val) {
	typename T::iterator it = std::find(ref.begin(), ref.end(), val);
	if (it == ref.end()) throw std::runtime_error(std::string("No value"));
	return it;
}

#endif
