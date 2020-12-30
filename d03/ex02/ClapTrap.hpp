#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <string>
#include <iostream>

class ClapTrap
{
protected:
	unsigned int	_hitp;
	unsigned int	_mhitp;
	unsigned int	_energyp;
	unsigned int	_menergyp;
	unsigned int	_level;
	std::string		_name;
	unsigned int	_melee_attack_dmg;
	unsigned int	_range_attack_dmg;
	unsigned int	_armor_reduction;

public:
	ClapTrap();
	ClapTrap(ClapTrap const & src);
    ClapTrap(std::string name);
    ~ClapTrap();

	ClapTrap & 			operator=(ClapTrap const & src);

	unsigned int		rangedAttack(std::string const & target);
	unsigned int		meleeAttack(std::string const & target);
	void				takeDamage(unsigned int amount);
	void				beRepaired(unsigned int amount);

	std::string			getName() const;
	unsigned int		getHitP() const;
	unsigned int		getMaxHitP() const;
	unsigned int		getEnergy() const;
	unsigned int		getMaxEnergy() const;
	unsigned int		getLevel() const;
	unsigned int		getMeleeDmg() const;
	unsigned int		getRangeDmg() const;
	unsigned int		getArmorDmg() const;

};

#endif