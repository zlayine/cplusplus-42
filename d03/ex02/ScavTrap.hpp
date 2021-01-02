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
	ScavTrap(ScavTrap const & src);
    ScavTrap(std::string name);
    ~ScavTrap();
	
	ScavTrap & 			operator=(ScavTrap const & src);

	unsigned int		rangedAttack(std::string const & target);
	unsigned int		meleeAttack(std::string const & target);
	void				challengeNewcomer(std::string const & target);

};

typedef void 	(ScavTrap::*ScavPTR) (std::string const &);

#endif