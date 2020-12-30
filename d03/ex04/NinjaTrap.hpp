#ifndef NINJATRAP_H
# define NINJATRAP_H

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
public:
	NinjaTrap();
	NinjaTrap(NinjaTrap const & src);
    NinjaTrap(std::string name);
    ~NinjaTrap();

	unsigned int		rangedAttack(std::string const & target);
	unsigned int		meleeAttack(std::string const & target);
	void				ninjaShoebox(FragTrap const & target);
	void				ninjaShoebox(ScavTrap const & target);
	void				ninjaShoebox(NinjaTrap const & target);

};

#endif