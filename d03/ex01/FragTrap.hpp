#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include <iostream>
#include <string>

class FragTrap
{
private:
	unsigned int	_hitp;
	unsigned int	_mhitp;
	unsigned int	_energyp;
	unsigned int	_menergyp;
	unsigned int	_level;
	std::string		_name;
	unsigned int	_melee_attack_dmg;
	unsigned int	_range_attack_dmg;
	unsigned int	_kick_attack_dmg;
	unsigned int	_lookaw_attack_dmg;
	unsigned int	_gas_attack_dmg;
	unsigned int	_armor_reduction;

	unsigned int	_kickAttack(std::string const & target);
	unsigned int	_lookAwayAttack(std::string const & target);
	unsigned int	_gasAttack(std::string const & target);

public:
	FragTrap();
	FragTrap(FragTrap const & src);
    FragTrap(std::string name);
    ~FragTrap();

	FragTrap & 			operator=(FragTrap const & src);

	unsigned int		rangedAttack(std::string const & target);
	unsigned int		meleeAttack(std::string const & target);
	void				takeDamage(unsigned int amount);
	void				beRepaired(unsigned int amount);

	unsigned int		vaulthunter_dot_exe(std::string const & target);

	std::string			getName() const;
	unsigned int		getHitP() const;
	unsigned int		getMaxHitP() const;
	unsigned int		getEnergy() const;
	unsigned int		getMaxEnergy() const;
	unsigned int		getLevel() const;
	unsigned int		getMeleeDmg() const;
	unsigned int		getRangeDmg() const;
	unsigned int		getKickDmg() const;
	unsigned int		getLookDmg() const;
	unsigned int		getGasDmg() const;
	unsigned int		getArmorDmg() const;
};

typedef unsigned int 	(FragTrap::*FragPTR) (std::string const &);

#endif