#include "../inc/Contact.hpp"

Contact::Contact() {
	this->first_name = "";
	this->last_name = "";
	this->nick_name = "";
	this->phone_number = "";
	this->darkest_secret = "";
}

Contact::~Contact(){};

void	Contact::set_first_name(std::string first_name) {
	this->first_name = first_name;
};
void	Contact::set_last_name(std::string last_name) {
	this->last_name = last_name;
};
void	Contact::set_nick_name(std::string nick_name) {
	this->nick_name = nick_name;
};
void	Contact::set_phone_number(std::string phone_number) {
	this->phone_number = phone_number;
};
void	Contact::set_darkest_secret(std::string darkest_secret) {
	this->darkest_secret = darkest_secret;
};

std::string	Contact::get_first_name() { return this->first_name; }
std::string	Contact::get_last_name() { return this->last_name; }
std::string	Contact::get_nick_name() { return this->nick_name; }
std::string	Contact::get_phone_number() { return this->phone_number; }
std::string Contact::get_darkest_secret() { return this->darkest_secret; }
