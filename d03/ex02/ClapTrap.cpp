#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Super Constructor Called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Super Constructor Called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Deconstructor Called" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount - this->_armor_reduction > this->_hitp)
		this->_hitp = 0;
	else if (amount > 0)
		this->_hitp -= (amount - this->_armor_reduction);
	else
		std::cout << "Negatif damage" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (amount > this->_mhitp)
		this->_hitp = 100;
	else
		this->_hitp += amount;
}

std::string	ClapTrap::getName() const{
	return this->_name;
}
