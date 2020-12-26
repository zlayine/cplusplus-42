#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Super ClapBody Created" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Super ClapBody Demolished" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount - this->_armor_reduction > this->_hitp)
		this->_hitp = 0;
	else if (amount > 0)
		this->_hitp -= (amount - this->_armor_reduction);
	std::cout << this->_name << ": Woah! Oh! Jeez!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (amount > this->_mhitp)
		this->_hitp = 100;
	else
		this->_hitp += amount;
	std::cout << this->_name << ": Sweet life juice!" << std::endl;
}

std::string	ClapTrap::getName() const{
	return this->_name;
}
