#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "Knock Knock, mini-trap is here!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
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
	ScavPTR	ptrs[3] = { &ScavTrap::_pushupsChallenge, 
		&ScavTrap::_fuelChallenge,
		&ScavTrap::_raceChallenge};

	if (this->_energyp >= 25)
	{
		this->_energyp -= 25;
		std::cout << this->_name << ": Behind you little frag!" << std::endl;
		r = rand() % 3;
		(this->*ptrs[r])(target);
	}
	else
		std::cout << this->_name << ": Dangit, I'm out of energy!" << std::endl;
}
