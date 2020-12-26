#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include <iostream>
#include <string>

class ScavTrap
{
private:
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
    ScavTrap();
    ScavTrap(std::string name);
    ~ScavTrap();

	unsigned int		rangedAttack(std::string const & target);
	unsigned int		meleeAttack(std::string const & target);
	void				takeDamage(unsigned int amount);
	void				beRepaired(unsigned int amount);

	void				challengeNewcomer();

	std::string			getName() const;

};

typedef unsigned int 	(ScavTrap::*PTR) (std::string const &);

#endif