#ifndef NinjaTrap_H
# define NinjaTrap_H

#include "ClapTrap.hpp"

class NinjaTrap : public ClapTrap
{
private:

public:
	NinjaTrap();
    NinjaTrap(std::string name);
    ~NinjaTrap();

	unsigned int		rangedAttack(std::string const & target);
	unsigned int		meleeAttack(std::string const & target);
	void				takeDamage(unsigned int amount);
	void				beRepaired(unsigned int amount);

	void				ninjaShoebox();

	std::string			getName() const;

};

#endif