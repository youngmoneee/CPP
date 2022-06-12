#include "Zombie.hpp"

Zombie::Zombie( void ) : name("") {}

Zombie::Zombie( std::string name ) {
	this->setName(name);
}

Zombie::~Zombie( void ) {
	std::cout << this->name <<" is Destroyed" << std::endl;
}

void	Zombie::setName(std::string name) {
	this->name = name;
}

void	Zombie::announce( void ) {
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
