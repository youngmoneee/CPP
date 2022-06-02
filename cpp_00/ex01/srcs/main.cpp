#include <iostream>
#include "../inc/PhoneBook.hpp"

int main() {
	PhoneBook book;

	std::cout << "PHONE BOOK\n" << "====================" << std::endl;
	std::cout << "ADD : add a New Contact" << std::endl;
	std::cout << "SEARCH : Find a Contact" << std::endl;
	std::cout << "EXIT : exit Program" << std::endl;
	while (1) {
		std::string buf;

		std::cout << "Enter a command : ";
		std::getline(std::cin, buf);
		if (buf == "ADD") book.add();
		else if (buf == "SEARCH") book.search();
		else if (buf == "EXIT") return 0;
	}
	return 0;
}
