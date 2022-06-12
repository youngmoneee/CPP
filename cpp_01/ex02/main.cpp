#include <iostream>

int main() {
	std::string str = "HI THIS IS BRAIN";

	std::string* stringPTR = &str;
	std::string& stringREF = str;

	std::cout
	<< " string addr : " << &str << '\n'
	<< " stringPTR addr : " << stringPTR << '\n'
	<< " stringREF addr : " << &stringREF << '\n'
	<< std::endl;
	std::cout
	<< " string value : " << str << '\n'
	<< " stringPTR value : " << *stringPTR << '\n'
	<< " stringREF value : " << stringREF << '\n'
	<< std::endl;

	str = "New String";
	std::cout
	<< " string value Modified : " << str << '\n'
	<< " stringPTR value Modified : " << *stringPTR << '\n'
	<< " stringREF value Modified : " << stringREF
	<< std::endl;
	return 0;
}