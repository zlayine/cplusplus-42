#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap()
{
	std::cout << "Hey, watch out!, mini-trap is here!" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name)
{
	this->_hitp = 60;
	this->_mhitp = 60;
	this->_energyp = 120;
	this->_menergyp = 120;
	this->_level = 1;
	this->_melee_attack_dmg = 60;
	this->_range_attack_dmg = 5;
	this->_armor_reduction = 0;
	std::cout << "Hey, watch out!, " << name << " is here!" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << this->_name <<  ": No, nononono NO!" << std::endl;
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

void				NinjaTrap::ninjaShoebox(FragTrap const & target)
{
	if (this->_energyp >= 25)
	{
		this->_energyp -= 25;
		std::cout << this->_name << ": Behind you little frag!" << std::endl;
		std::cout << target.getName() << ": Whaaat!! Where" << std::endl;
	}
	else
		std::cout << this->_name << ": Dangit, I'm out of energy!" << std::endl;
}

void				NinjaTrap::ninjaShoebox(ScavTrap const & target)
{
	if (this->_energyp >= 25)
	{
		this->_energyp -= 25;
		std::cout << this->_name << ": Look you dropped something!" << std::endl;
		std::cout << target.getName() << ": Whaaat!! Where" << std::endl;
	}
	else
		std::cout << this->_name << ": Dangit, I'm out of energy!" << std::endl;
}

void				NinjaTrap::ninjaShoebox(NinjaTrap const & target)
{
	if (this->_energyp >= 25)
	{
		this->_energyp -= 25;
		std::cout << this->_name << ": So you can climb this wall Ha ?! >:)" << std::endl;
		std::cout << target.getName() << ": I bet i can! >:(" << std::endl;
	}
	else
		std::cout << this->_name << ": Dangit, I'm out of energy!" << std::endl;
}
