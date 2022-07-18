#ifndef ITER_HPP
#define ITER_HPP

template <typename T>
void iter(T* arr, unsigned int sz, void (*f)(const T&)) {
	for (unsigned int i = 0; i < sz; i++) (*f)(arr[i]);
}
#endif
