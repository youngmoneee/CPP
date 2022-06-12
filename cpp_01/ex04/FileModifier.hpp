#ifndef FILEMODIFIER_HPP
#define FILEMODIFIER_HPP

#include <iostream>
#include <fstream>
#include <cstdlib>

class FileModifier {
private:
	FileModifier();
	std::string i_name, o_name;
	const std::string src, dest;
	std::string buf;
	std::ifstream ifs;
	std::ofstream ofs;
public:
	FileModifier(std::string& i_name, std::string& src, std::string& dest);
	~FileModifier();
};

#endif
