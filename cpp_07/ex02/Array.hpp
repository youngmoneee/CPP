#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <stdexcept>

template <typename T>
class Array {

private:
	T* arr;
	int sz;

public:
	Array() { *this = Array(0); }
	Array(int sz) : sz(sz) {
		try {
			this->arr = new T[this->sz];
		} catch (std::bad_alloc& b) {
			*this = Array(0);
		}
	}
	Array(const Array& ref) : sz(ref.sz) {
		this->arr = new T[sz];
		for (int i = 0; i != size(); i++)
			this->arr[i] = ref[i];
	}
	~Array() {
		delete[] this->arr;
	}

	Array<T>& operator=(const Array& ref) {
		if (this == &ref) return *this;
		this->~Array();
		this->sz = ref.sz;
		this->arr = new T[this->sz];
		for (int i = 0; i != size(); i++)
			this->arr[i] = ref[i];
		return *this;
	}

	int size() const {
		return this->sz;
	}

	T& operator[](int i) {
		if (i < 0 || size() <= i)
			throw std::exception();
		return this->arr[i];
	}

	const T& operator[](int i) const {
		if (i < 0 || size() <= i)
			throw std::exception();
		return this->arr[i];
	}
};

#endif
