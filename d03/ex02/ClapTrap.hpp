#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <string>
#include <iostream>

class ClapTrap
{
protected:
	int				_hitp;
	int				_mhitp;
	int				_energyp;
	int				_menergyp;
	int				_level;
	std::string		_name;
	unsigned int	_melee_attack_dmg;
	unsigned int	_range_attack_dmg;
	unsigned int	_armor_reduction;

public:
	ClapTrap();
    ClapTrap(std::string name);
    ~ClapTrap();

	unsigned int		rangedAttack(std::string const & target);
	unsigned int		meleeAttack(std::string const & target);
	void				takeDamage(unsigned int amount);
	void				beRepaired(unsigned int amount);

	std::string			getName() const;

};

#endif