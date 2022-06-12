#include "FileModifier.hpp"

FileModifier::FileModifier(std::string& i_name, std::string& src, std::string& dest) : i_name(i_name), src(src), dest(dest) {
	this->o_name = i_name + ".replace";
	this->ifs.open(this->i_name);
	if (this->ifs.fail()) {
		std::cerr << "Error : File Read/Open Error" << std::endl;
		std::exit(1);
	}
	else this->ofs.open(this->o_name);
	if (this->ofs.fail()) {
		std::cerr << "Error : File Write Error" << std::endl;
		std::exit(1);
	}
	std::string buf; int idx;
	while(getline(this->ifs, buf)) {
		while ((idx = buf.find(this->src)) >= 0) {
			buf.erase(idx, this->src.length());
			buf.insert(idx, this->dest);
		}
		this->ofs << buf;
		if (this->ifs.eof() == false) this->ofs << std::endl;
	}
}

FileModifier::~FileModifier() {}