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
	FragTrap(FragTrap const & src);
    FragTrap(std::string name);
    ~FragTrap();

	unsigned int		rangedAttack(std::string const & target);
	unsigned int		meleeAttack(std::string const & target);
	unsigned int		vaulthunter_dot_exe(std::string const & target);

	unsigned int		getKickDmg() const;
	unsigned int		getLookDmg() const;
	unsigned int		getGasDmg() const;
};

typedef unsigned int 	(FragTrap::*FragPTR) (std::string const &);

#endif