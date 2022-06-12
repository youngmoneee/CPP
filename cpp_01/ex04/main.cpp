#include "FileModifier.hpp"

int main(int argc, char** argv) {
	if (argc != 4) {
		std::cout
		<< argv[0] << " needs 3 Arguments [file_name] [src] [dest]"
		<< std::endl;
		std::exit(0);
	}
	std::string arg[3] = {argv[1], argv[2], argv[3]};

	FileModifier fm(arg[0], arg[1], arg[2]);
	return 0;
}