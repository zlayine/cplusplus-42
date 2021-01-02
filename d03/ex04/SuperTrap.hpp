#ifndef SUPERTRAP_H
# define SUPERTRAP_H

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : virtual public FragTrap, virtual public NinjaTrap
{

public:
	SuperTrap();
	SuperTrap(SuperTrap const & src);
    SuperTrap(std::string name);
    ~SuperTrap();

	unsigned int		rangedAttack(std::string const & target);
	unsigned int		meleeAttack(std::string const & target);

};

#endif