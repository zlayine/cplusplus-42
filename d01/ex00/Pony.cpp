#include "Pony.hpp"

Pony::Pony(std::string location)
{
	std::cout << "Pony is alive " << location << std::endl;
}

Pony::~Pony()
{
	std::cout << "Pony is dead" << std::endl;
}