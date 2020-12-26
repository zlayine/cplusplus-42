#include "SuperTrap.hpp"

SuperTrap::SuperTrap()
{
	// std::cout << "Have no fear, mini-trap is here!" << std::endl;
}

SuperTrap::SuperTrap(std::string name) : FragTrap(name) , NinjaTrap(name)
{
	this->FragTrap::_name = name;
	this->FragTrap::_hitp = FragTrap::_hitp;
	this->FragTrap::_mhitp = FragTrap::_mhitp;
	this->FragTrap::_energyp = NinjaTrap::_energyp;
	this->FragTrap::_menergyp = NinjaTrap::_menergyp;
	this->FragTrap::_level = 1;
	this->FragTrap::_melee_attack_dmg = NinjaTrap::_melee_attack_dmg;
	this->FragTrap::_range_attack_dmg = FragTrap::_range_attack_dmg;
	this->FragTrap::_armor_reduction = FragTrap::_armor_reduction;
	std::cout << this->FragTrap::_energyp << std::endl;
	std::cout << "Have no fear, " << name << " is here!" << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << this->FragTrap::_name <<  ": I'm too pretty to die!" << std::endl;
}

unsigned int	SuperTrap::rangedAttack(std::string const & target)
{
	std::cout << "FR4G-TP "
		<< this->FragTrap::_name
		<< " attacks "
		<< target
		<< " at range, causing "
		<< this->FragTrap::_range_attack_dmg
		<< std::endl;
	return this->FragTrap::_range_attack_dmg;
}

unsigned int	SuperTrap::meleeAttack(std::string const & target)
{
	std::cout << "FR4G-TP "
		<< this->FragTrap::_name
		<< " attacks "
		<< target
		<< " with a melee, causing "
		<< this->FragTrap::_melee_attack_dmg
		<< std::endl;
	return this->FragTrap::_melee_attack_dmg;
}

// unsigned int	SuperTrap::vaulthunter_dot_exe(std::string const & target)
// {
// 	FragPTR	ptrs[5] = { &SuperTrap::meleeAttack, 
// 		&SuperTrap::rangedAttack,
// 		&SuperTrap::_kickAttack,
// 		&SuperTrap::_lookAwayAttack,
// 		&SuperTrap::_gasAttack};
// 	int		r;

// 	if (this->_energyp >= 25)
// 	{
// 		this->_energyp -= 25;
// 		r = rand() % 5;
// 		return (this->*ptrs[r])(target);
// 	}
// 	std::cout << this->_name << ": Dangit, I'm out of energy!" << std::endl;
// 	return 0;
// }
