#ifndef FRAGTRAP_H
# define FRAGTRAP_H

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

private:
	unsigned int	_kick_attack_dmg;
	unsigned int	_lookaw_attack_dmg;
	unsigned int	_gas_attack_dmg;

	unsigned int	_kickAttack(std::string const & target);
	unsigned int	_lookAwayAttack(std::string const & target);
	unsigned int	_gasAttack(std::string const & target);

public:
	FragTrap();
    FragTrap(std::string name);
    ~FragTrap();

	unsigned int		rangedAttack(std::string const & target);
	unsigned int		meleeAttack(std::string const & target);
	// void				takeDamage(unsigned int amount);
	// void				beRepaired(unsigned int amount);

	unsigned int		vaulthunter_dot_exe(std::string const & target);

	// std::string			getName() const;

};

typedef unsigned int 	(FragTrap::*FragPTR) (std::string const &);

#endif