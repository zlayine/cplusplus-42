#include "Zombie.hpp"

void	Zombie::announce()
{
	std::cout << "<" << _name << " (" << _type << ")> Braaaiiiinsss...." << std::endl;
}

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type) {
	
}

std::string	Zombie::randomName() {
	int			r;
	std::string	names[5] = {"Toto", "Tata", "Titi", "Momo", "Koko"};

    r = rand() % 5;
	return (names[r]);
}

Zombie::Zombie()
{
	_name = this->randomName();
	_type = this->randomName();
}

Zombie::~Zombie()
{
}