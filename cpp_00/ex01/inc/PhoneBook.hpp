#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H

#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <string>

class PhoneBook {
private:
	int		sz;
	int		idx;
	Contact	contact[8];
	
public:
	PhoneBook();
	~PhoneBook();
	void	add();
	void	search();
	void 	print(Contact& contact) const;
	void 	print(char c) const;
	std::string format(std::string str) const;
	int		size() const;
	bool	is_full() const;
	std::string&	strip(std::string& str);
};

#endif
