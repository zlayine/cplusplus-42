#ifndef POWERFIST_H
# define POWERFIST_H

#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
public:
	PowerFist();
	PowerFist(PowerFist const &src);
	virtual	~PowerFist();

    PowerFist &    operator=(PowerFist const & rhs);
	virtual	void	attack() const;
};

#endif