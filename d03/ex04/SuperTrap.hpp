#ifndef SUPERTRAP_H
# define SUPERTRAP_H

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap :  public FragTrap, public NinjaTrap
{

public:
	SuperTrap();
    SuperTrap(std::string name);
    ~SuperTrap();

	unsigned int		rangedAttack(std::string const & target);
	unsigned int		meleeAttack(std::string const & target);

};

#endif