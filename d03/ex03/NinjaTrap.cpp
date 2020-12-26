#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap()
{

}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap()
{
	this->_name = name;
	this->_hitp = 60;
	this->_mhitp = 60;
	this->_energyp = 120;
	this->_menergyp = 120;
	this->_level = 1;
	this->_melee_attack_dmg = 60;
	this->_range_attack_dmg = 5;
	this->_armor_reduction = 0;
	std::cout << "Constructor Called" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "Deconstructor Called" << std::endl;
}

unsigned int	NinjaTrap::rangedAttack(std::string const & target)
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

unsigned int	NinjaTrap::meleeAttack(std::string const & target)
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

std::string	NinjaTrap::getName() const{
	return this->_name;
}
