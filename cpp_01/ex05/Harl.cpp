#include "Harl.hpp"

using std::endl; using std::cout; using std::string;

Harl::Harl() {}
Harl::~Harl() {}

void Harl::complain(std::string level) {
	void (Harl::*mfunc[5])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error, &Harl::nomatch};
	string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int idx = 0;
	while (idx < 4 && level != levels[idx]) idx++;
	(this->*mfunc[idx])();
}

void Harl::warning() {
	cout
	<< "I think I deserve to have some extra bacon for free."
	   "I’ve been coming for years whereas you started working here since last month."
	<< endl;
}

void Harl::error() {
	cout
	<< "This is unacceptable! I want to speak to the manager now."
	<< endl;
}

void Harl::info() {
	cout
	<< "I cannot believe adding extra bacon costs more money."
	   "You didn’t put enough bacon in my burger! If you did,"
	   "I wouldn’t be asking for more!"
	<< endl;
}

void Harl::debug() {
	cout
	<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
	<< endl;
}

void Harl::nomatch() {
	cout
	<< "yami"
	<< endl;
}