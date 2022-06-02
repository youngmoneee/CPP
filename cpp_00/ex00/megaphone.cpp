#include <iostream>

std::string upper(std::string ret) {
	for (std::string::iterator it = ret.begin(); it != ret.end(); ++it)
		if (*it >= 'a' && *it <= 'z') *it = *it - 'a' + 'A';
	return ret;
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else for (int i = 1; i < argc; ++i)
		std::cout << upper(argv[i]);
	std::cout << std::endl;
	return (0);
}
