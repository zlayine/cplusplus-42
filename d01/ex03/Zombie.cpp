#include "Zombie.hpp"

void	Zombie::announce()
{
	std::cout << "<" << _name << " (" << _type << ")> Braaaiiiinsss...." << std::endl;
}

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type) {
	
}

std::string	Zombie::randomName() {
	int			r;
	std::string	names[5] = {"Mandell", "Corn", "Simon", "Momo", "Lin"};

	srand(clock());
    r = rand() % 5;
	return (names[r]);
}

Zombie::Zombie()
{
	_name = randomName();
	_type = randomName();
}

Zombie::~Zombie()
{
	std::cout << "Zombie Dead.." << std::endl;
}