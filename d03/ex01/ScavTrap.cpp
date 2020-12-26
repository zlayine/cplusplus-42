#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "Knock Knock, mini-trap is here!" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	this->_name = name;
	this->_hitp = 100;
	this->_mhitp = 100;
	this->_energyp = 50;
	this->_menergyp = 50;
	this->_level = 1;
	this->_melee_attack_dmg = 20;
	this->_range_attack_dmg = 15;
	this->_armor_reduction = 3;
	std::cout << "Knock Knock, " << name << " is here!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << this->_name <<  ": I'll die the way I lived: annoying!" << std::endl;
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

void	ScavTrap::takeDamage(unsigned int amount)
{
	if (amount - this->_armor_reduction > this->_hitp)
		this->_hitp = 0;
	else if (amount > 0)
		this->_hitp -= (amount - this->_armor_reduction);
	std::cout << this->_name << ": Woah! Oh! Jeez!" << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if (amount > this->_mhitp)
		this->_hitp = 100;
	else
		this->_hitp += amount;
	std::cout << this->_name << ": Sweet life juice!" << std::endl;
}

void	ScavTrap::_raceChallenge(std::string const & target)
{
	std::cout << "FR4G-TP "
		<< this->_name
		<< " challenges "
		<< target
		<< " for 100m race!"
		<< std::endl;
}

void	ScavTrap::_pushupsChallenge(std::string const & target)
{
	std::cout << "FR4G-TP "
		<< this->_name
		<< " challenges "
		<< target
		<< " for 100 pushups!"
		<< std::endl;
}

void	ScavTrap::_fuelChallenge(std::string const & target)
{
	std::cout << "FR4G-TP "
		<< this->_name
		<< " challenges "
		<< target
		<< " for the first one to be fully fueled!"
		<< std::endl;
}

void	ScavTrap::challengeNewcomer(std::string const & target)
{
	int 	r;
	PTR		ptrs[3] = { &ScavTrap::_pushupsChallenge, 
		&ScavTrap::_fuelChallenge,
		&ScavTrap::_raceChallenge};

	(this->*ptrs[r])(target);
}

std::string	ScavTrap::getName() const{
	return this->_name;
}
