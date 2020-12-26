#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include <iostream>
#include <string>

class FragTrap
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
    FragTrap(std::string name);
    ~FragTrap();

	unsigned int		rangedAttack(std::string const & target);
	unsigned int		meleeAttack(std::string const & target);
	void				takeDamage(unsigned int amount);
	void				beRepaired(unsigned int amount);

	unsigned int		vaulthunter_dot_exe(std::string const & target);

	std::string			getName() const;

};

typedef unsigned int 	(FragTrap::*PTR) (std::string const &);

#endif