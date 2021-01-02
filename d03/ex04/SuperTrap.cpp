#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name) : ClapTrap(name), FragTrap(name) , NinjaTrap(name)
{
	this->_hitp = this->FragTrap::_hitp;
	this->_mhitp = FragTrap::_mhitp;
	this->_energyp = NinjaTrap::_energyp;
	this->_menergyp = NinjaTrap::_menergyp;
	this->_level = 1;
	this->_melee_attack_dmg = NinjaTrap::_melee_attack_dmg;
	this->_range_attack_dmg = FragTrap::_range_attack_dmg;
	this->_armor_reduction = FragTrap::_armor_reduction;
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
