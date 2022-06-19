#include "../inc/PhoneBook.hpp"

PhoneBook::PhoneBook() {
	sz = 0;
	idx = 0;
}
PhoneBook::~PhoneBook(){}

void	PhoneBook::add() {
	std::string	first_name,
		last_name,
		nick_name,
		phone_number,
		darkest_secret;

	std::cout << "First Name : ";
	std::getline(std::cin, first_name);
	std::cout << "Last Name : ";
	std::getline(std::cin, last_name);
	std::cout << "Nick Name : ";
	std::getline(std::cin, nick_name);
	std::cout << "Phone Number : ";
	std::getline(std::cin, phone_number);
	std::cout << "Darkest Secret : ";
	std::getline(std::cin, darkest_secret);
	if (strip(first_name) == ""
		|| strip(last_name) == ""
		|| strip(nick_name) == ""
		|| strip(phone_number) == ""
		|| strip(darkest_secret) == "") {
		std::cout << "Fill field without blank" << std::endl;
		return ;
	}

	if (is_full() == false) sz++;
	Contact& tmp = contact[idx % 8];
	tmp.set_first_name(first_name);
	tmp.set_last_name(last_name);
	tmp.set_nick_name(nick_name);
	tmp.set_phone_number(phone_number);
	tmp.set_darkest_secret(darkest_secret);
	idx++;
	std::cout << "Added" << std::endl;
}

void	PhoneBook::search() {
	if (size() == 0) {
		std::cout << "Empty" << std::endl;
		return ;
	}
	std::cout << "|" << std::setw(10) << std::string(10, '-');
	print('-');
	std::cout << "|" << std::setw(10) << "Index";
	{
		Contact tmp;

		tmp.set_first_name("First Name");
		tmp.set_last_name("Last Name");
		tmp.set_nick_name("Nick Name");
		print(tmp);
	}
	std::cout << "|" << std::setw(10) << std::string(10, '-');
	print('-');
	for (int i = 0; i < size(); i++) {
		std::cout << "|" << std::setw(10) << i + 1;
		print(this->contact[i]);
		std::cout << "|" << std::setw(10) << std::string(10, '-');
		print('-');
	}
	std::cout << "What you find : ";
	int input;
	std::cin >> input;
	std::cin.ignore();
	if (std::cin.fail() || input > size() || input < 1) {
		std::cout << "Wrong input" << std::endl;
		if (std::cin.fail()) {
			std::cin.clear();
			std::cin.ignore(INT_MAX, '\n');
		}
		return ;
	}
	std::cout << "First Name : " << this->contact[input - 1].get_first_name() << std::endl;
	std::cout << "Last Name : " << this->contact[input - 1].get_last_name() << std::endl;
	std::cout << "Nick Name : " << this->contact[input - 1].get_nick_name() << std::endl;
	std::cout << "Phone Number : " << this->contact[input - 1].get_phone_number() << std::endl;
	std::cout << "Darkest Secret : " << this->contact[input - 1].get_darkest_secret() << std::endl;
}

std::string	PhoneBook::format(std::string str) const {
	if (str.length() > 10) str = str.substr(0, 9) + ".";
	return str;
}

void 	PhoneBook::print(char c) const {
	Contact tmp;

	tmp.set_first_name(std::string(10, c));
	tmp.set_last_name(std::string(10, c));
	tmp.set_nick_name(std::string(10, c));
	print(tmp);
}

void	PhoneBook::print(Contact& contact) const {
	std::cout
	<< "|" << std::setw(10)
	<< format(contact.get_first_name())
	<< "|" << std::setw(10)
	<< format(contact.get_last_name())
	<< "|" << std::setw(10)
	<< format(contact.get_nick_name())
	<< "|" << std::endl;
}

std::string&	PhoneBook::strip(std::string& str) {
	while (str[0] == ' ') str.erase(str.begin());
	while (str.length() && str[str.length() - 1] == ' ') str.erase(str.length() - 1);
	return str;
}

int		PhoneBook::size() const { return this->sz; }
bool	PhoneBook::is_full() const { return this->size() == 8; }
