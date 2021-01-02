#ifndef SUPERTRAP_H
# define SUPERTRAP_H

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{

public:
	SuperTrap();
	SuperTrap(SuperTrap const & src);
    SuperTrap(std::string name);
    ~SuperTrap();

	SuperTrap & 		operator=(SuperTrap const & src);
	unsigned int		rangedAttack(std::string const & target);
	unsigned int		meleeAttack(std::string const & target);

};

#endif