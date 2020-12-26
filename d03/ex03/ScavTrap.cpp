#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{

}

ScavTrap::ScavTrap(std::string name)
{
	this->_name = name;
	this->_hitp = 100;
	this->_mhitp = 100;
	this->_energyp = 100;
	this->_menergyp = 100;
	this->_level = 1;
	this->_melee_attack_dmg = 30;
	this->_range_attack_dmg = 30;
	this->_armor_reduction = 5;
	std::cout << "Constructor Called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Deconstructor Called" << std::endl;
}

unsigned int	ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP "
		<< this->_name
		<< " attacks "
		<< target
		<< " at range, causing "
		<< this->_range_attack_dmg
		<< std::endl;
	return this->_range_attack_dmg;
}

unsigned int	ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP "
		<< this->_name
		<< " attacks "
		<< target
		<< " with a melee, causing "
		<< this->_melee_attack_dmg
		<< std::endl;
	return this->_melee_attack_dmg;
}

// void	ScavTrap::takeDamage(unsigned int amount)
// {
// 	if (amount - this->_armor_reduction > this->_hitp)
// 		this->_hitp = 0;
// 	else if (amount > 0)
// 		this->_hitp -= (amount - this->_armor_reduction);
// 	else
// 		std::cout << "Negatif damage" << std::endl;
// }

// void	ScavTrap::beRepaired(unsigned int amount)
// {
// 	if (amount > this->_mhitp)
// 		this->_hitp = 100;
// 	else
// 		this->_hitp += amount;
// }

void	ScavTrap::challengeNewcomer()
{

}

std::string	ScavTrap::getName() const{
	return this->_name;
}
