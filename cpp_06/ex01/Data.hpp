#ifndef DATA_HPP
#define DATA_HPP

#include <stdint.h>

struct Data {
	int contents;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif
