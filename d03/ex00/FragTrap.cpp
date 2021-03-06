#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "Have no fear, mini-trap is here!" << std::endl;
}

FragTrap::FragTrap(std::string name) : _name(name)
{
	this->_hitp = 100;
	this->_mhitp = 100;
	this->_energyp = 100;
	this->_menergyp = 100;
	this->_level = 1;
	this->_melee_attack_dmg = 20;
	this->_range_attack_dmg = 30;
	this->_kick_attack_dmg = 15;
	this->_lookaw_attack_dmg = 2;
	this->_gas_attack_dmg = 12;
	this->_armor_reduction = 5;
	std::cout << "Have no fear, " << name << " is here!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << this->_name <<  ": I'm too pretty to die!" << std::endl;
}

FragTrap::FragTrap(FragTrap const & src)
{
	*this = src;
}

FragTrap&		FragTrap::operator=(FragTrap const & src)
{
	this->_hitp = src.getHitP();
	this->_mhitp = src.getMaxHitP();
	this->_energyp = src.getEnergy();
	this->_menergyp = src.getMaxEnergy();
	this->_level = src.getLevel();
	this->_name = src.getName();
	this->_melee_attack_dmg = src.getMeleeDmg();
	this->_range_attack_dmg = src.getRangeDmg();
	this->_kick_attack_dmg = src.getKickDmg();
	this->_lookaw_attack_dmg = src.getLookDmg();
	this->_gas_attack_dmg = src.getGasDmg();
	this->_armor_reduction = src.getArmorDmg();
	return *this;
}

unsigned int		FragTrap::getHitP() const
{
	return _hitp;
}
unsigned int		FragTrap::getMaxHitP() const
{
	return _mhitp;
}
unsigned int		FragTrap::getEnergy() const
{
	return _energyp;
}
unsigned int		FragTrap::getMaxEnergy() const
{
	return _menergyp;
}
unsigned int		FragTrap::getLevel() const
{
	return _level;
}
unsigned int		FragTrap::getMeleeDmg() const
{
	return _melee_attack_dmg;
}
unsigned int		FragTrap::getRangeDmg() const
{
	return _range_attack_dmg;
}
unsigned int		FragTrap::getKickDmg() const
{
	return _kick_attack_dmg;
}
unsigned int		FragTrap::getLookDmg() const
{
	return _lookaw_attack_dmg;
}
unsigned int		FragTrap::getGasDmg() const
{
	return _gas_attack_dmg;
}
unsigned int		FragTrap::getArmorDmg() const
{
	return _armor_reduction;
}

unsigned int	FragTrap::rangedAttack(std::string const & target)
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

unsigned int	FragTrap::meleeAttack(std::string const & target)
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

unsigned int	FragTrap::_kickAttack(std::string const & target)
{
	std::cout << "FR4G-TP "
		<< this->_name
		<< " attacks "
		<< target
		<< " with a kick, causing "
		<< this->_kick_attack_dmg
		<< std::endl;
	return this->_kick_attack_dmg;
}

unsigned int	FragTrap::_lookAwayAttack(std::string const & target)
{
	std::cout << "FR4G-TP "
		<< this->_name
		<< " attacks "
		<< target
		<< " by looking away, causing "
		<< this->_lookaw_attack_dmg
		<< std::endl;
	return this->_lookaw_attack_dmg;
}

unsigned int	FragTrap::_gasAttack(std::string const & target)
{
	std::cout << "FR4G-TP "
		<< this->_name
		<< " attacks "
		<< target
		<< " with a gas bomb, causing "
		<< this->_gas_attack_dmg
		<< std::endl;
	return this->_gas_attack_dmg;
}


void	FragTrap::takeDamage(unsigned int amount)
{
	if (amount - this->_armor_reduction > this->_hitp)
		this->_hitp = 0;
	else if (amount > 0)
		this->_hitp -= (amount - this->_armor_reduction);
	std::cout << this->_name << ": Woah! Oh! Jeez!" << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	if (amount > this->_mhitp)
		this->_hitp = 100;
	else
		this->_hitp += amount;
	std::cout << this->_name << ": Sweet life juice!" << std::endl;
}

unsigned int	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	PTR		ptrs[5] = { &FragTrap::meleeAttack, 
		&FragTrap::rangedAttack,
		&FragTrap::_kickAttack,
		&FragTrap::_lookAwayAttack,
		&FragTrap::_gasAttack};
	int		r;

	srand(clock());
	if (this->_energyp >= 25)
	{
		this->_energyp -= 25;
		r = rand() % 5;
		return (this->*ptrs[r])(target);
	}
	std::cout << this->_name << ": Dangit, I'm out of energy!" << std::endl;
	return 0;
}

std::string	FragTrap::getName() const{
	return this->_name;
}
