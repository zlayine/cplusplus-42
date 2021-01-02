#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_hitp = 100;
	this->_mhitp = 100;
	this->_energyp = 100;
	this->_menergyp = 100;
	this->_level = 1;
	this->_melee_attack_dmg = 30;
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

unsigned int	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	FragPTR	ptrs[5] = { &FragTrap::meleeAttack, 
		&FragTrap::rangedAttack,
		&FragTrap::_kickAttack,
		&FragTrap::_lookAwayAttack,
		&FragTrap::_gasAttack};
	int		r;

	if (this->_energyp >= 25)
	{
		this->_energyp -= 25;
		r = rand() % 5;
		return (this->*ptrs[r])(target);
	}
	std::cout << this->_name << ": Dangit, I'm out of energy!" << std::endl;
	return 0;
}
