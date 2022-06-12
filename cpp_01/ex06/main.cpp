#include "Harl.hpp"

int main(int argc, char* argv[]) {
	if (argc != 2) {
		std::cout << "ARGV ERR" << std::endl;
		std::exit(0);
	}
	std::string input = argv[1];
	Harl instance;

	instance.complain(input);
	return 0;
}