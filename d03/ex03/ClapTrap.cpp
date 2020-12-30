#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Super ClapBody Created" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	std::cout << "Super ClapBody Created" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Super ClapBody Demolished" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	*this = src;
}

ClapTrap&		ClapTrap::operator=(ClapTrap const & src)
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

unsigned int		ClapTrap::getHitP() const
{
	return _hitp;
}
unsigned int		ClapTrap::getMaxHitP() const
{
	return _mhitp;
}
unsigned int		ClapTrap::getEnergy() const
{
	return _energyp;
}
unsigned int		ClapTrap::getMaxEnergy() const
{
	return _menergyp;
}
unsigned int		ClapTrap::getLevel() const
{
	return _level;
}
unsigned int		ClapTrap::getMeleeDmg() const
{
	return _melee_attack_dmg;
}
unsigned int		ClapTrap::getRangeDmg() const
{
	return _range_attack_dmg;
}
unsigned int		ClapTrap::getArmorDmg() const
{
	return _armor_reduction;
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
