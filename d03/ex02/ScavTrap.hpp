#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	void			_raceChallenge(std::string const & target);
	void			_pushupsChallenge(std::string const & target);
	void			_fuelChallenge(std::string const & target);
public:
	ScavTrap();
    ScavTrap(std::string name);
    ~ScavTrap();

	unsigned int		rangedAttack(std::string const & target);
	unsigned int		meleeAttack(std::string const & target);
	// void				takeDamage(unsigned int amount);
	// void				beRepaired(unsigned int amount);

	void				challengeNewcomer(std::string const & target);

	// std::string			getName() const;

};

typedef void 	(ScavTrap::*ScavPTR) (std::string const &);

#endif