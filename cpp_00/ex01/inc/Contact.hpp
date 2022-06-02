#ifndef CONTACT_H
# define CONTACT_H

#include <string>

class Contact {
private:
	std::string	first_name;
	std::string	last_name;
	std::string	nick_name;
	std::string phone_number;
	std::string	darkest_secret;

public:
	Contact();
	~Contact();

	/*
	 *	Setter
	 */
	void		set_first_name(std::string first_name);
	void		set_last_name(std::string last_name);
	void		set_nick_name(std::string nick_name);
	void		set_phone_number(std::string phone_number);
	void		set_darkest_secret(std::string darkest_secret);

	/*
	 *	Getter
	 */
	std::string	get_first_name();
	std::string get_last_name();
	std::string get_nick_name();
	std::string get_phone_number();
	std::string get_darkest_secret();
};

#endif
