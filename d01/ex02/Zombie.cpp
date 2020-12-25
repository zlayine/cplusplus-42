#include <iostream>
#include <string>
#include "Zombie.hpp"

void	Zombie::announce()
{
	std::cout << "<" << name << " (" << type << ")> Braaaiiiinsss...." << std::endl;
}

Zombie::Zombie(std::string name, std::string type) : name(name), type(type) {
	
}

Zombie::~Zombie()
{
	
}