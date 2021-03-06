#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "Knock Knock, mini-trap is here!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : _name(name)
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

ScavTrap::ScavTrap(ScavTrap const & src)
{
	*this = src;
}

ScavTrap&		ScavTrap::operator=(ScavTrap const & src)
{
	this->_hitp = src.getHitP();
	this->_mhitp = src.getMaxHitP();
	this->_energyp = src.getEnergy();
	this->_menergyp = src.getMaxEnergy();
	this->_level = src.getLevel();
	this->_name = src.getName();
	this->_melee_attack_dmg = src.getMeleeDmg();
	this->_range_attack_dmg = src.getRangeDmg();
	this->_armor_reduction = src.getArmorDmg();
	return *this;
}

unsigned int		ScavTrap::getHitP() const
{
	return _hitp;
}
unsigned int		ScavTrap::getMaxHitP() const
{
	return _mhitp;
}
unsigned int		ScavTrap::getEnergy() const
{
	return _energyp;
}
unsigned int		ScavTrap::getMaxEnergy() const
{
	return _menergyp;
}
unsigned int		ScavTrap::getLevel() const
{
	return _level;
}
unsigned int		ScavTrap::getMeleeDmg() const
{
	return _melee_attack_dmg;
}
unsigned int		ScavTrap::getRangeDmg() const
{
	return _range_attack_dmg;
}
unsigned int		ScavTrap::getArmorDmg() const
{
	return _armor_reduction;
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

std::string	ScavTrap::getName() const{
	return this->_name;
}
